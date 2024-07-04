package com.itheima.variable;

public class VariableDemo3 {
    public static void main(String[] args) {
        //1.byte字节型 占1个字节 -128 - 128
        byte number= 98;
        System.out.println(number);
        //byte nubmer2 =128;报错

        //2.short短整型 占个字节
        short money =30000;

        //3.int 整型 默认的类型 占4个字节(默认使用的类型)
        int it=1545412884;

        //4.long 长整型 占8个字符
        long lg =54545454;
        //注意：随便写一个整数字面量默认是int类型的，
        //如果希望随便写一个整数字面量当成long类型，需要在后面加l/L
        long lg2=545645554545455454L;

        //5.float单精度 占4个字节
        //如果希望随便写一个小数字面量是float，需要在后面加F/f
        float score =98.5f;

        //6.double双精度 占8字节
        double score2 =999.99;

        //7.char
        char ch ='a';
        char ch2 ='中';

        //8.boolean
         boolean rs=true;
         boolean rs2 =false;

        System.out.println("-----------------------------------------------");

        String name ="西门吹雪";
        System.out.println(name);
    }
}
