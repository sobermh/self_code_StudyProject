/*************************************************************************
	> File Name: c180.c
	> Author: 
	> Mail: 
	> Created Time: Tue 10 May 2022 08:06:09 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    long long sum=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++) sum*=2;
    printf("%lld",sum);
    return 0;
}
