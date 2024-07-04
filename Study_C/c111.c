/*************************************************************************
	> File Name: c111.c
	> Author: 
	> Mail: 
	> Created Time: Wed 06 Apr 2022 09:55:56 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n<=3)printf("14");
    else printf("%.1lf",14+(n-3)*2.3);
    return 0;
}
