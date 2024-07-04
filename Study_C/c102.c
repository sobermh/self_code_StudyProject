/*************************************************************************
	> File Name: c102.c
	> Author: 
	> Mail: 
	> Created Time: Sat 02 Apr 2022 11:39:40 AM CST
 ************************************************************************/

#include<stdio.h>
int main()
{
    int a,b,c,t;
    scanf("%d%d%d%d",&a,&b,&c,&t);
    double x;
    x=(a*b*(c-t))/(b*1.0*c+a*c-a*b);
    printf("%.2lf",x);
}
