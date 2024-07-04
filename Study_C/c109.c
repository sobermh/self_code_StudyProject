/*************************************************************************
	> File Name: c109.c
	> Author: 
	> Mail: 
	> Created Time: Tue 05 Apr 2022 11:22:19 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(!(n%2))printf("YES");
    else if(!(n/10%2))printf("YES");
    else if(!(n/100%2))printf("YES");
    else if(!(n/1000%2))printf("YES");
    else printf("NO");
    return 0;
}
