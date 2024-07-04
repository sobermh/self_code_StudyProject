/*************************************************************************
	> File Name: test4.c
	> Author: 
	> Mail: 
	> Created Time: Sat 26 Mar 2022 03:00:42 PM CST
 ************************************************************************/

#include <stdio.h>

int main()
{
    char str[100]={0};//清空
    while(scanf("%[^\n]s",str)!=EOF)
    {
        getchar();
        int ret=printf("%s",str);
        printf(" has %d chars!\n",ret);
    }
    return 0;
}

