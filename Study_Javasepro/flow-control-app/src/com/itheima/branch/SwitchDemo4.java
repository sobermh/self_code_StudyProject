package com.itheima.branch;

public class SwitchDemo4 {
    public static void main(String[] args) {
        int month =7;
        switch(month){
            case 1 :
            case 3 :
            case 5 :
            case 7 :
            case 8 :
            case 10 :
            case 12 :
                System.out.println("31天");
                break;
            default:
                System.out.println("不是31天");
        }
    }
}
