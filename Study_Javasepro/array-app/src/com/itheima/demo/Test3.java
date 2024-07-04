package com.itheima.demo;

import java.util.Random;
import java.util.Scanner;

public class Test3 {
    public static void main(String[] args) {
        int[] arr = new int[5];
        Random r = new Random();
        for (int i = 0; i < 5; i++) {
            arr[i] = r.nextInt(1, 21);
        }
        Scanner sc = new Scanner(System.in);
        OUT:
        while (true) {
            System.out.println("请输入猜测的数:");
            int oknum = sc.nextInt();
            for (int i = 0; i < arr.length; i++) {
                if (arr[i]==oknum){
                    System.out.println("恭喜您");
                    break OUT;
                }
            }
            System.out.println("在数组中不存在");
        }
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]+"\t");
        }
    }
}