/*************************************************************************
	> File Name: test8.c
	> Author: 
	> Mail: 
	> Created Time: Sun 03 Apr 2022 08:05:31 AM CST
 ************************************************************************/

#include<stdio.h>







int func(int k ,int b ,int x)
{
    return k*x+b;
}

int main()
{
    int k,b;
    scanf("%d%d",&k,&b);
    for (int  x =1;x<101;x++)
    {
        printf("%d\n",func(k,b,x));
    }
    return 0;
}
