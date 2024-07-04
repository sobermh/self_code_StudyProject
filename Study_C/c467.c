/*************************************************************************
	> File Name: c467.c
	> Author: 
	> Mail: 
	> Created Time: Fri 15 Apr 2022 02:41:49 PM CST
 ************************************************************************/

#include<stdio.h>

long long  func(int n){
    if(n==1) return 1;
    else return n*func(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%lld",func(n));
    return 0;
}
