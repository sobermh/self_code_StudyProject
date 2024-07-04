/*************************************************************************
	> File Name: c184.c
	> Author: 
	> Mail: 
	> Created Time: Thu 05 May 2022 11:50:55 AM CST
 ************************************************************************/

#include<stdio.h>

int func(int n){
    if(n==1) return 1;
    else return func(n-1)*2+2;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",func(n));
    return 0;
}
