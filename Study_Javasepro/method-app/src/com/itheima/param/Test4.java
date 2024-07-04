package com.itheima.param;

public class Test4 {
    public static void main(String[] args) {
        int[] ages={10,20,30,40};
        System.out.println(getInArray(ages, 30));
    }
    public static int getInArray(int[] arr,int b){
        if(arr!=null&&arr.length>0){
            for (int i = 0; i < arr.length; i++) {
                if(arr[i]==b){
                    return i;
                }
            }
            return -1;
        }else{
            return -1;
        }
    }
}
