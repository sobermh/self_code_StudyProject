/*************************************************************************
	> File Name: c100.c
	> Author: 
	> Mail: 
	> Created Time: Mon 28 Mar 2022 04:53:08 PM CST
 ************************************************************************/

#include<stdio.h>
int main()
{
    double n,sum=0;
    scanf("%lf",&n);
    for (int i=0;i<6;i++)
    {
        sum =(sum+n)*(1+0.00417);
    }
    printf("$%.2lf",sum);
    return 0;
}
