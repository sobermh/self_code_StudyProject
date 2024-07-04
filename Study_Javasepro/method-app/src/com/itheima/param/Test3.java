package com.itheima.param;

public class Test3 {
    public static void main(String[] args) {
     int[] arr ={10,20,30,40};
     printArray(arr);
    }
    public static void printArray(int[] arr){
        System.out.print("[");
        if(arr!=null && arr.length>0){
            for (int i = 0; i < arr.length; i++) {
                System.out.print(i ==arr.length-1 ? arr[i]:arr[i]+",");
            }
        }
        System.out.print("]");
    }
}
