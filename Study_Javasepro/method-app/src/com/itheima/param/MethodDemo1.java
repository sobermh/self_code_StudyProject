package com.itheima.param;

public class MethodDemo1 {
    public static void main(String[] args) {
        int a =10;
        change(a);
        System.out.println(a);//10
    }
    public static void change(int a){
        System.out.println(a);//10
        a=20;
        System.out.println(a);//20
    }
}
