package com.itheima.random;

import java.util.Random;
import java.util.Scanner;

public class RandomTest2 {
    public static void main(String[] args) {
        Random r =new Random();
        int data=r.nextInt(10,31);
        int oknum=r.nextInt(61)+20;
        System.out.println(oknum);
        Scanner sc =new Scanner(System.in);
        while(true){
            int num =sc.nextInt();
            if(num<oknum){
                System.out.println("小了");
            }else if (num>oknum){
                System.out.println("大了");
            }else{
                System.out.println("bingo");
                break;
            }
        }
    }
}
