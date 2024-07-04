package com.itheima.create;

public class ArrayDemo5 {
    public static void main(String[] args) {
        //1.整型数组
        int[] arr =new int[10];
        System.out.println(arr[0]);
        System.out.println(arr[9]);
        //2.字符数组
        char[] chars =new char[100];
        System.out.println((int)chars[0]);
        System.out.println(chars[99]);
        //3.浮点数组
        double[] scores =new double[4];
        System.out.println(scores[1]);
        System.out.println(scores[2]);
        //4.布尔类型
        boolean[] booleans = new boolean[100];
        System.out.println(booleans[0]);
        System.out.println(booleans[1]);
        //5.引用类型
        String[] names= new String[90];
        System.out.println(names[1]);
        System.out.println(names[5]);
    }
}
