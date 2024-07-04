package com.itheima.returnDemo;

public class ReturnDemo {
    public static void main(String[] args) {
     chu(10,0);
    }
    public static void chu(int a,int b){
        if(b==0){
            System.out.println("除数不能为0");
            return;//立即跳出当前方法，并结束当前方法的执行
        }
        int c =a/b;
        System.out.println(c);
    }
}
