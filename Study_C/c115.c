/*************************************************************************
	> File Name: c115.c
	> Author: 
	> Mail: 
	> Created Time: Wed 06 Apr 2022 11:29:57 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    if(x==y) printf("100");
    else if ((x/10==y%10) && (x%10==y/10))printf("20");
    else if (  (x/10==y%10) || (x/10==y/10 ) || (x%10==y%10) ||(x%10==y/10) ) printf("2");
    return 0;
}
