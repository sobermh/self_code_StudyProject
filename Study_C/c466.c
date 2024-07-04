/*************************************************************************
	> File Name: c466.c
	> Author: 
	> Mail: 
	> Created Time: Thu 21 Apr 2022 08:47:16 AM CST
 ************************************************************************/

#include<stdio.h>



int main(){
    int n,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=i,a1=i,hws=0;
        while(a!=0){
            hws=hws*10+a%10;
            a/=10;
        }
        if(hws==a1) count++;
    }
    printf("%d",count);
    return 0;
}
