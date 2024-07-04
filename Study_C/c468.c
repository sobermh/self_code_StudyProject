/*************************************************************************
	> File Name: c468.c
	> Author: 
	> Mail: 
	> Created Time: Fri 15 Apr 2022 02:33:34 PM CST
 ************************************************************************/

#include<stdio.h>

int gcb(int m, int n){
    if(n==0) return m;
    else return gcb(n,m%n);
}
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    printf("%d",gcb(m,n));
    return 0;
}
