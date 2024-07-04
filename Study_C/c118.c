/*************************************************************************
	> File Name: c118.c
	> Author: 
	> Mail: 
	> Created Time: Thu 07 Apr 2022 09:55:56 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    if(year>=1900){
        switch((year-1900)%12+1){
            case 1:printf("rat");break;
            case 2:printf("ox");break;
            case 3:printf("tiger");break;
            case 4:printf("rabbit");break;
            case 5:printf("dragon");break;
            case 6:printf("snake");break;
            case 7:printf("horse");break;
            case 8:printf("sheep");break;
            case 9:printf("monkey");break;
            case 10:printf("rootster");break;
            case 11:printf("dog");break;
            case 12:printf("pig");
        }
    }
    else {
        switch((1900-year)%12){
            case 0:printf("rat");break;
            case 1:printf("pig");break;
            case 2:printf("dog");break;
            case 3:printf("rooster");break;
            case 4:printf("monkey");break;
            case 5:printf("sheep");break;
            case 6:printf("horse");break;
            case 7:printf("snake");break;
            case 8:printf("dragon");break;
            case 9:printf("rabbit");break;
            case 10:printf("tiger");break;
            case 11:printf("ox");
        }
    }
    return 0;
}
