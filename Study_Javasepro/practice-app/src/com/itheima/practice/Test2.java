package com.itheima.practice;

public class Test2 {
    public static void main(String[] args) {
        sushu();
    }
    public static void sushu() {
        for (int i = 101; i < 201; i++) {
            //信号位：标记
            boolean flag = true;//一开始认为当前数据是素数
            for (int j = 2; j < i; j++) {
                if (i % j == 0) {
                    flag = false;
                    break;
                }
            }
            if(flag){
                System.out.print(i + "\t");
            }
        }
    }
}