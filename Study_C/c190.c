/*************************************************************************
	> File Name: c190.c
	> Author: 
	> Mail: 
	> Created Time: Thu 19 May 2022 08:49:02 AM CST
 ************************************************************************/

#include<stdio.h>

int is_prime(int x){
    for(int i=2;i<x/2;i++){
        if(x%i==0) return 0;
    }
    return 1;
}

int main(){
    int n,count=0;
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++){
        if(is_prime(i)){
            for(int j=i;j<=n/2;j++){
                if(is_prime(j) && i+j==n) count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}
