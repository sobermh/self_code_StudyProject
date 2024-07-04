package com.itheima.loop;

public class WhileDemo6 {
    public static void main(String[] args) {
        double peakHeight=8848860;
//        double paperThickness=0.1;
        int count =0;
//        while(paperThickness<peakHeight){
//            paperThickness*=2;
//            count++;
//            System.out.println("第"+count+"次"+paperThickness);
        for( double paperThickness=0.1;paperThickness<peakHeight;paperThickness*=2){
            count++;
            System.out.println("第"+count+"次"+paperThickness);
        }
//        System.out.println(paperThickness);
    }
}
