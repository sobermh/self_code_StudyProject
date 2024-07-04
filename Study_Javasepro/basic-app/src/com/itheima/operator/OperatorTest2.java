package com.itheima.operator;

public class OperatorTest2 {
    public static void main(String[] args) {
            int data =589;

            //1.个位
            int ge = data %10;
            System.out.println(ge);

            //2.十位
            int shi =data /10%10;
            System.out.println(shi);

            //3.百位
            int bai =data /100;
            System.out.println(bai);

    }
}
