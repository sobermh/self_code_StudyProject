package com.itheima.create;

public class MethodAttentionDemo4 {
    public static void main(String[] args) {
        int rs=sum(100,900);
        System.out.println(rs);
        System.out.println(sum(100, 200));
    }
    public static int sum(int a ,int b){
        return a+b;
    }
}
