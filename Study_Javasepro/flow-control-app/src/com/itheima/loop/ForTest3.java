package com.itheima.loop;

public class ForTest3 {
    public static void main(String[] args) {
        int sum =0;
        for(int k=1; k<=10;k+=2){
                sum+=k;
                System.out.println("第"+k+"次循环"+sum);
        }
    }
}
