package com.itheima.loop;

public class ForTest4 {
    public static void main(String[] args) {
        int count=0;
        for(int i =100;i<1000;i++){
            int ge = i%10;
            int shi = i/10%10;
            int bai = i/100;
            if(ge*ge*ge +shi*shi*shi+bai*bai*bai == i){
                count=count+1;
                System.out.print(i+"\t");
            }
        }
        System.out.println();
        System.out.println(count);
    }
}
















