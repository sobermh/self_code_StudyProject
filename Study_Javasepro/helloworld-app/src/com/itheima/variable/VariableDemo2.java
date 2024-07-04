package com.itheima.variable;

public class VariableDemo2 {
    public static void main(String[] args) {
        //1.变量需要先声明再使用
        int a = 23;
        System.out.println(a);
        //2.变量声明后。不能存储其他类型的数据
        // a =1.5;
        //3.变量的有效范围是从定义开始到}截至，且在同一个范围内部不能定义2个同名的变量
        {
            int b = 25;
            System.out.println(b);
//          int b=23;报错

        }
//        System.out.println(b);
        System.out.println(a);
        //4.变量定义的时候可以没有初始化值，但是使用的时候必须给初始值
        int c;
        c = 12;
        System.out.println(c);
        System.out.println("---------------------------------");
        char ch ='a';
        System.out.println(ch+1);
        System.out.println(ch);

        int i1=0B01100001;
        System.out.println(i1);

        int i2=0141;
        System.out.println(i2);

        int i3=0X61;
        System.out.println(i3);

    }
}
