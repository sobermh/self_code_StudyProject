/*************************************************************************
	> File Name: test6.c
	> Author: 
	> Mail: 
	> Created Time: Mon 28 Mar 2022 09:36:03 PM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int main()
{
    double a;
    while(~scanf("%lf",&a))
    {
        printf("%.2lf",pow(a,1.0/3));
    }
    return 0;
}
