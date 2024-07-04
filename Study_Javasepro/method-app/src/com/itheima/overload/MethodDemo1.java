package com.itheima.overload;

public class MethodDemo1 {
    public static void main(String[] args) {
        fire();
        fire("岛国");
        fire("英国",10);
    }
    public static void fire(){
        System.out.println("默认发射一枚武器给米国");
    }
    public static void fire(String location){
        System.out.println("默认发射一枚武器给" + location);
    }
    public static void fire(String location,int number){
        System.out.println("默认发射"+number+"枚武器给" + location);
    }
}
