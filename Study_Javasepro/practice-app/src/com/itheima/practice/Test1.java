package com.itheima.practice;
import java.util.Scanner;
public class Test1 {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        System.out.println("机票原价");
        double price =sc.nextDouble();
        System.out.println("月份");
        int month=sc.nextInt();
        System.out.println("仓位(头等舱、经济仓)");
        String type =sc.next();
        double rs=calc(price,month,type);
        System.out.println(rs);
    }
    public static double calc(double money, int month, String type) {
        if (month >= 5 && month <= 10) {
            switch (type) {
                case "经济舱" -> money *= 0.85;
                case "头等舱" -> money *= 0.9;
                default -> {
                    System.out.println("请输入正确仓位");
                    money = -1;//当前无法计算价格了！
                }
            }
        } else if (month == 11 || month == 12 || month >= 1 && month <= 4) {
            switch (type) {
                case "经济舱" -> money *= 0.65;
                case "头等舱" -> money *= 0.7;
                default -> {
                    System.out.println("请输入正确仓位");
                    money = -1;//当前无法计算价格了！
                }
            }
        } else {
            System.out.println("月份有问题");
            money=-1;
        }
        return money;
    }
}
