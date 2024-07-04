package com.itheima.loop;

public class ForTest2 {
    public static void main(String[] args) {
       /* int m = 0;
        for(int i =1;i<=5;i++){
            m= m+i;
        }
        System.out.println(m);*/
        int sum=0;
        for (int i = 1; i <=5; i++) {
            sum +=i;
            System.out.println("第"+i+"次循环:"+sum);
        }
        System.out.println(sum);
    }
}
