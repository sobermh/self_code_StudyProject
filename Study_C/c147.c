/*************************************************************************
	> File Name: c147.c
	> Author: 
	> Mail: 
	> Created Time: Wed 13 Apr 2022 10:37:07 AM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(){
    char str[10000];
    int *p;
    scanf("%s",str);
    if(str[strlen(str)-1]%2==0) printf("YES");
    else printf("NO");
    return 0;
}
