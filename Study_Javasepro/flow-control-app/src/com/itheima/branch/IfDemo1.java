package com.itheima.branch;

public class IfDemo1 {
    public static void main(String[] args) {
        //需求：60-100正常，否则提示进一步检查
        int heartBeat =30;
        if(heartBeat<60 || heartBeat>100){
            System.out.println("您的心跳是："+heartBeat+"，需要检查");
        }
        System.out.println("---------------------------------");
        double money =5999;
        if(money>=1314){
            System.out.println("发送成功");
        }else{
            System.out.println("发送失败");
        }
        System.out.println("---------------------------------");
        int score =50;
        if(score>=0&&score<60){
            System.out.println("C");
        }else if(score >=60 && score<80){
            System.out.println("B");
        }else if(score >=80&&score<90){
            System.out.println("A");
        }else{
            System.out.println("录入错误");
        }

    }
}
