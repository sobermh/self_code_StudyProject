/*************************************************************************
	> File Name: c196.c
	> Author: 
	> Mail: 
	> Created Time: Thu 12 May 2022 07:54:31 AM CST
 ************************************************************************/

#include<stdio.h>

int func(int n){
    if(n==2) return 1;
    if(n==3) return 1;
    if(n==4) return 1;
    else return func(n-2)+func(n-3);
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",func(n));
    return 0;
}
