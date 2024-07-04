/*************************************************************************
	> File Name: c98.c
	> Author: 
	> Mail: 
	> Created Time: Mon 28 Mar 2022 04:41:50 PM CST
 ************************************************************************/

#include<stdio.h>
#define pi 3.14
int main()
{
    double r,h;
    scanf("%lf%lf",&r,&h);
    printf("%.2lf\n",r*r*pi);
    printf("%.2lf",r*r*pi*h);
    return 0;
}
