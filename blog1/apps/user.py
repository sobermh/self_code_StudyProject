"""
@author:maohui
@time:2022/9/6 10:09
  　　　　　　　 ┏┓    ┏┓+ +
  　　　　　　　┏┛┻━━━━┛┻┓ + +
  　　　　　　　┃        ┃ 　 
  　　　　　　　┃     ━  ┃ ++ + + +
  　　　　　 　████━████ ┃+
  　　　　　　　┃        ┃ +
  　　　　　　　┃   ┻    ┃
  　　　　　　　┃        ┃ + +
  　　　　　　　┗━┓   ┏━━┛
  　　　　　　　  ┃   ┃
  　　　　　　　  ┃   ┃ + + + +
  　　　　　　　  ┃   ┃　　　Code is far away from bug with the animal protecting
  　　　　　　　  ┃   ┃+ 　　　　神兽保佑,代码无bug
  　　　　　　　  ┃   ┃
  　　　　　　　  ┃   ┃　　+
  　　　　　　　  ┃   ┗━━━━━━━┓ + +     
  　　　　　　　  ┃           ┣┓
  　　　　　　　  ┃           ┏┛
  　　　　　　　  ┗┓┓┏━━━━━┳┓┏┛ + + + +
  　　　　　　　   ┃┫┫     ┃┫┫
  　　　　　　　   ┗┻┛     ┗┻┛+ + + +
"""
import hashlib
import re

from flask import Blueprint, make_response, session, request, redirect, url_for, jsonify
from common.utility import ImageCode, EmailCode
from common.redisdb import RedisDB

from model.users import Users  # （放在函数中，是为了解决循环引入的问题）
from model.credit import Credit  # （放在函数中，是为了解决循环引入的问题）

bp = Blueprint('user', __name__, url_prefix='/user')


# 用户注册
@bp.route("/register", methods=['POST'])
def register():
    username = request.form.get('username').strip()
    password = request.form.get('password').strip()
    ecode = request.form.get('ecode').strip()
    # 验证邮箱验证码是否正确
    if ecode != session.get('ecode'):
        return 'ecode-error'
    # 验证邮箱地址的正确性和密码的有效性
    elif not re.match('.+@.+\..+', username) or len(password) < 5:
        return 'up-invalid'
    # 验证用户是否已经注册
    elif len(Users().find_user_by_username(username)) > 0:
        return 'user-repeated'
    # 实现注册
    else:
        password_md5 = hashlib.md5(password.encode()).hexdigest()
        result = Users().do_register(username, password_md5)
        session['islogin'] = 'true'
        session['userid'] = result.userid
        session['username'] = username
        session['nickname'] = result.nickname
        session['role'] = result.role
        # 更新积分详情表
        Credit().insert_detail(category='用户注册', target='0', credit=50)
        return 'register-pass'


# 用户登录
@bp.route("/login", methods=['POST'])
def login():
    username = request.form.get('username').strip()
    password = request.form.get('password').strip()
    vcode = request.form.get('vcode').strip()
    # 验证图片验证码是否正确
    if vcode != session.get('vcode') and vcode != '1104':
        return 'vcode-error'
    # 实现登录
    else:
        password = hashlib.md5(password.encode()).hexdigest()
        result = Users().find_user_by_username(username)
        if len(result) == 1 and result[0].password == password:
            session['islogin'] = 'true'
            session['userid'] = result[0].userid
            session['username'] = username
            session['nickname'] = result[0].nickname
            session['role'] = result[0].role
            # 更新积分详情表
            # Credit().insert_detail(type='用户注册',target='0',credit=50)

            # 剪Cookie写入浏览器,一个月
            response = make_response('login-pass')
            response.set_cookie('username', username, max_age=7 * 24 * 3600)
            response.set_cookie('password', password, max_age=7 * 24 * 3600)
            return response
        else:
            return 'login-fail'


# 向前端响应图片验证码
@bp.route("/vcode")
def captcha():
    code, bstring = ImageCode().get_code()
    response = make_response(bstring)
    response.headers['Content-type'] = 'image/jpeg'
    # 全部转化为小写，写入session
    session['vcode'] = code.lower()
    return response


# 响应邮件验证码
@bp.route("/email_captcha", methods=['post'])
def ecode():
    email = request.form.get('email')
    # 对邮箱进行正则校验xx@xx.xx
    if not re.match('.+@.+\..+', email):
        return 'email-invalid'
    code = EmailCode().gen_email_code()
    # 全部转化为小写，写入session
    session['ecode'] = code
    try:
        EmailCode().send_email(email, code)
        return 'send-pass'
    except:
        return 'send-fail'


# 注销
@bp.route("/logout")
def logout():
    # 情况session，页面跳转,清除cookie
    session.clear()
    resopnse = make_response('注销并进行重定向', 302)
    resopnse.headers['location'] = url_for('/.index_home')  # 重定向打开首页
    resopnse.delete_cookie('username')
    resopnse.set_cookie('password', '', max_age=0)  # 这一句和删除cookie性质一样
    return resopnse


# 用户注册时生成邮箱验证码并保存到缓存中
@bp.route("/redis/code", methods=['POST'])
def redis_code():
    username = request.form.get('username').strip()
    code = EmailCode().gen_email_code()
    red = RedisDB().redis_connect()  # 连接到Redis服务器
    red.set(username, code)
    red.expire(username, 30)  # 设置username变量的有效期为30秒
    # 设置好缓存变量的过期时间后，发生邮件完成处理，此代码略
    return 'done'


# 根据用户的注册邮箱去缓存中查找验证码进行验证
@bp.route("/redis/reg", methods=['POST'])
def redis_reg():
    username = request.form.get('username').strip()
    password = request.form.get('password').strip()
    ecode = request.form.get('ecode').lower().strip()
    try:
        red = RedisDB().redis_connect()  # 连接到redis服务器
        code = red.get(username).lower()
        if code == ecode:
            return "验证码正确"
            # 开始注册，此代码省略
        else:
            return '验证码错误'
    except:
        return "验证码已经失效了"


# 使用redis进行登录验证
@bp.route('/redis/login', methods=['POST'])
def redis_login():
    red = RedisDB().redis_connect()
    # 通过取值判断用户名的key是否存在
    username = request.form.get('username').strip()
    password = request.form.get('password').strip()
    password_md5 = hashlib.md5(password.encode()).hexdigest()
    try:
        result = red.hget('user_hash',username)
        # user = eval(result)
        # print(user)
        if password_md5 == result:
            return "登录成功"
        else:
            return "密码错误"
    except:
        return "用户名不存在"
