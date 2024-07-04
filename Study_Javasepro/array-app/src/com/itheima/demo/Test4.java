package com.itheima.demo;

import java.util.Random;
import java.util.Scanner;

public class Test4 {
    public static void main(String[] args) {
        int[] arr =new int[5];
        Scanner sc =new Scanner(System.in);
        for (int i = 0; i < arr.length; i++) {
            System.out.println("输入第" + (i + 1) + "个工号");
            int num =sc.nextInt();
            arr[i]=num;
        }
        Random r=new Random();
        for (int i = 0; i < arr.length; i++) {
            int index =r.nextInt(arr.length);
            int k=arr[index];
            arr[index]=arr[i];
            arr[i]=k;
            for (int i1 = 0; i1 < arr.length; i1++) {
                System.out.print(arr[i1] + "\t");
            }
            System.out.println("");
        }
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]+"\t");
        }
    }
}
