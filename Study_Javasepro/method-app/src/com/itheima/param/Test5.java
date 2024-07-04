package com.itheima.param;

public class Test5 {
    public static void main(String[] args) {
        int[] age1 = {2,2,3};
        int[] age2 = {2, 2, 3};
        System.out.println(judge(age1, age2));
    }

    public static boolean judge(int[] arr1, int[] arr2) {
        if (arr1.length == arr2.length) {
            for (int i = 0; i < arr1.length; i++) {
                if (arr1[i] != arr2[i]) {
                    return false;
                }
            }
            return true;
        } else {
            return false;
        }
    }
}

