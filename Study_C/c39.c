/*************************************************************************
	> File Name: c39.c
	> Author: 
	> Mail: 
	> Created Time: Mon 28 Mar 2022 10:32:03 AM CST
 ************************************************************************/

#include<stdio.h>
int main()
{
    int begin;
    int n;
    scanf("%d%d",&begin,&n);
    if(begin<0)
    {
        begin=0;
    }
    if(begin%2!=0)
    {
        begin+=1;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",begin);
        begin+=2;
    }
    return 0;
}
