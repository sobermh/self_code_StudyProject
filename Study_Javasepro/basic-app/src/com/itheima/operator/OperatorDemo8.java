package com.itheima.operator;

public class OperatorDemo8 {
    public static void main(String[] args) {
        double score=18;
        String rs = score >= 60? "考试通过":"挂科";
        System.out.println(rs);

        //需要从两个整数中找出较大值
        int a =10;
        int b =2000;
        int max= a>b ? a : b;
        System.out.println(max);
        System.out.println("------------------------------");

        int i =10;
        int j =30;
        int k=50;
//        int temp= i>j? i:j;
//        int rsmax = temp>k? temp:k;


        System.out.println("----------------------------");

        int rsmax1= i>j? (i>k ? i:k) : (j>k ? j:k);
        System.out.println(rsmax1);
    }
}
