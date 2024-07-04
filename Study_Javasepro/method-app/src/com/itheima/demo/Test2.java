package com.itheima.demo;

public class Test2 {
    public static void main(String[] args) {
        judge(1);
    }
    public static void judge(int n){
        if(n%2==0&n>0){
            System.out.println("是偶数");
        }else if (n%2!=0&n>0){
            System.out.println("是奇数");
        }else {
            System.out.println("输入错误");
        }
    }
}
