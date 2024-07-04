package com.itheima.demo;

public class Test3 {
    public static void main(String[] args) {
    int[] ages={23,19,25,78,34};
        System.out.println(getArrayMaxData(ages));
    }
    public static int getArrayMaxData(int[] arr){
        int max =arr[0];
        for (int i = 1; i < arr.length; i++) {
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return max;
    }
}
