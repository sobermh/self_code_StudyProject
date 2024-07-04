/*************************************************************************
	> File Name: c104.c
	> Author: 
	> Mail: 
	> Created Time: Sat 02 Apr 2022 01:32:20 PM CST
 ************************************************************************/

#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a/100==9)
    {
        printf("YES");
    }
    else
    {
        if(a/10%10==9)
        {
            printf("YES");
        }
        else
        {
            if(a%10==9)
            {
                printf("YES");
            }
            else
            {
                printf("NO");
            }
        }
    }
    return 0;
}
