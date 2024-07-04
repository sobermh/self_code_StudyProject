/*************************************************************************
	> File Name: c164.c
	> Author: 
	> Mail: 
	> Created Time: Wed 20 Apr 2022 05:42:03 PM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int main(){
    int m,n;
    scanf("%d %d",&n,&m);
    if(!(n%m)) printf("%d",n/m);
    else printf("%d",(int)(n/m)+1);
    return 0;
}
