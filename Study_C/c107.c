/*************************************************************************
	> File Name: c107.c
	> Author: 
	> Mail: 
	> Created Time: Sat 02 Apr 2022 02:04:04 PM CST
 ************************************************************************/

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%7==0 && n%2!=0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
