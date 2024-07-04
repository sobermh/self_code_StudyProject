/*************************************************************************
	> File Name: c200.c
	> Author: 
	> Mail: 
	> Created Time: Fri 13 May 2022 09:34:47 AM CST
 ************************************************************************/

#include<stdio.h>

int func(int n){
    int arr[10]={0};
    if(n==1){
        arr[0]=4;
        arr[1]=7;
        return arr;
    }
    else{
        arr[0]=func(n-1)[1];
        arr[1]=func(n-1)[0]+func(n-1[1];
        return arr;
    }
    return 0;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d/%d",func(n)[0],func(n)[1]);
    return 0;
}
