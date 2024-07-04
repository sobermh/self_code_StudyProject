/*************************************************************************
	> File Name: c127.c
	> Author: 
	> Mail: 
	> Created Time: Sun 10 Apr 2022 12:11:07 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int x,n;
    scanf("%d %d",&x,&n);
    double sum=x;
    if(1==n) sum=x*1.06;
    for(int i=1;i<n;i++) sum*=1.06;
    printf("%d",(int)sum);
    return 0;
}
