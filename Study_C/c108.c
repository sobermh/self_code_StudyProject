/*************************************************************************
	> File Name: c108.c
	> Author: 
	> Mail: 
	> Created Time: Sat 02 Apr 2022 04:53:23 PM CST
 ************************************************************************/

#include<stdio.h>
int main()
{
    char x;
    printf("r or t");
    scanf("%c",&x);
    printf("\n");
    double m,n;
    scanf("%lf%lf",&m,&n);
    if('r'==x)
    {
        printf("%.2lf",m*n);
    }
    else
    {
        printf("%.2lf",m*n*0.5);
    }
    return 0;
}
