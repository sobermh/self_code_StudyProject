/*************************************************************************
	> File Name: test2.c
	> Author: 
	> Mail: 
	> Created Time: Fri 25 Mar 2022 05:34:51 PM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int ret =printf("%d",n);
        printf("has %d  digits! \n",ret);
    }
    return 0;
}
