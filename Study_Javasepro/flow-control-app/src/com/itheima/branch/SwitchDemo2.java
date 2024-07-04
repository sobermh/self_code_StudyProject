package com.itheima.branch;

public class SwitchDemo2 {
    public static void main(String[] args) {
        String weekday ="周三";
        switch(weekday){
            case"周一":
                System.out.println("埋头苦干");
                break;
            case"周二":
                System.out.println("请求帮忙");
                break;
            case"周三":
                System.out.println("吃饭");
                break;
            case"周四":
                System.out.println("喝酒");
                break;
            default:
                System.out.println("null");
        }
    }
}
