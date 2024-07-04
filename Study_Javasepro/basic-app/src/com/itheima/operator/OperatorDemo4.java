package com.itheima.operator;

public class OperatorDemo4 {
    public static void main(String[] args) {
        int a = 10;
        ++a;//a= a +1
        System.out.println(a);

        int b =10;
        b--;//b =b-1
        System.out.println(b);

        System.out.println("-----------------------------");

        int i=10;
        int j=++i;
        System.out.println(i);
        System.out.println(j);

        int m=10;
        int n=m++;
        System.out.println(m);
        System.out.println(n);

        System.out.println("---------------------------------");

        int k =3;
        int p=5;
        int rs =k++ + ++k - --p + p-- - k-- + ++p +2;
        System.out.println(k);
        System.out.println(p);
        System.out.println(rs);
        //k 3 4 5 4
        //p 5 4 3 4
        //rs 3 8 4 8 3 7 9

    }
}
