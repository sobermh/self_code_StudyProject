package com.itheima.scanner;
//导包


import java.util.Scanner;

public class ScannerDemo {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);

        //3.调用sc对象的功能等待接收用户输入的数据
        //这个代码等待用户输入数据
        System.out.println("请您输入您的年龄:");
        int age =sc.nextInt();
//        System.out.println("您的年龄："+age);
//        System.out.println("请您输入您的姓名:");
        String name =sc.next();
        System.out.println("您的年龄："+age);
        System.out.println("欢迎"+name);


    }
}
