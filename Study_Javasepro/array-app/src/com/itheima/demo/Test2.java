package com.itheima.demo;

public class Test2 {
    public static void main(String[] args) {
        int[] num={15,900,1000,2000,950,-5};
        int max =num[0];
        for (int i = 0; i < num.length; i++) {
            if(num[i]>max){
                max =num[i];
            }
        }
        System.out.println(max);
    }
}
