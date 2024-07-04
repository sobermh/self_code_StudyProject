/*************************************************************************
	> File Name: c85.c
	> Author: 
	> Mail: 
	> Created Time: Fri 06 May 2022 09:36:42 AM CST
 ************************************************************************/

#include<stdio.h>

int func(int n){
    if(n==1) return 1;
    if(n==2) return 1;
    else return func(n-1)+func(n-2);
}


int main(){
    int n;
    scanf("%d",&n);
    printf("%d",func(n));
    return 0;
}
