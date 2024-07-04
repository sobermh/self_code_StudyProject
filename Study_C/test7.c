/*************************************************************************
	> File Name: test7.c
	> Author: 
	> Mail: 
	> Created Time: Fri 01 Apr 2022 11:01:03 PM CST
 ************************************************************************/

#include<stdio.h>
#define pi 3.14
int main()
{
    double r ,h;
    scanf("%lf%lf",&r,&h);
    printf("%.2lf",2*pi*r);
    printf("%.2lf",1/3.0*pi*r*r*h);
    return 0;
}
