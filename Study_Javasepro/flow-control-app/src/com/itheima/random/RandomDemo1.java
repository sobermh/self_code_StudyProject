package com.itheima.random;

import java.util.Random;

public class RandomDemo1 {
    public static void main(String[] args) {
        Random r = new Random();
        for (int i = 0; i < 20; i++) {
            int data = r.nextInt(10);
            System.out.println(data);
        }
        System.out.println("-----------------------------");
        int data = r.nextInt(10) + 1;
        System.out.println(data);
        System.out.println("-----------------------------");
        //3-17 ==>-3 ==>0-14==>+3
        int data1 =r.nextInt(15)+3;
        System.out.println(data1);
    }
}
