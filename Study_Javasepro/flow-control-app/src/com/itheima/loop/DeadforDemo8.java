package com.itheima.loop;

import java.util.Scanner;

public class DeadforDemo8 {
    public static void main(String[] args) {
//        for (;;) {
//            System.out.println("Hello World");
//        }
//        while (true){
//            System.out.println("q");
//        }
//        do {
//            System.out.println("b");
//        }while(true);
        System.out.println("------------------------");
        int okpasswd = 520;
        Scanner sc = new Scanner(System.in);
        while(true) {
            System.out.println("请输入密码");
            int passwd = sc.nextInt();
            if(passwd==okpasswd){
                System.out.println("密码正确");
                break;
            }else {
                System.out.println("密码错误");
            }
        }
    }
}
