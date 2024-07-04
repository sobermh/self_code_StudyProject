/*************************************************************************
	> File Name: 132.c
	> Author: 
	> Mail: 
	> Created Time: Sun 10 Apr 2022 10:24:48 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n,x;
    long long sum=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        sum*=x;
    }
    printf("%lld",sum);
    return 0;
}
