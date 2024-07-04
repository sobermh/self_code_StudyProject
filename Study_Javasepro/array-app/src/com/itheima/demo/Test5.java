package com.itheima.demo;

public class Test5 {
    public static void main(String[] args) {
        int[] arr ={5,2,3,1};
        //控制比较的次数
        for (int i = 0; i <arr.length-1; i++) {
            //控制每轮比较的次数，占位
            for (int j = 0; j < arr.length-i-1; j++) {
                if(arr[j]>arr[j+1]){
                    int k = arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=k;
                }
            }
        }
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]+"\t");
        }
    }
}
