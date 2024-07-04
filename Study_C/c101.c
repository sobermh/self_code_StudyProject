/*************************************************************************
	> File Name: c101.c
	> Author: 
	> Mail: 
	> Created Time: Mon 28 Mar 2022 05:02:28 PM CST
 ************************************************************************/

#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    while(n!=0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}
