/*************************************************************************
	> File Name: c465.c
	> Author: 
	> Mail: 
	> Created Time: Tue 26 Apr 2022 08:35:13 AM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int digit(long long n,int k){
    n=n/(pow(10,(k-1)));
    int res=n%10;
    return res;
}

int main(){
    long long  n,k;
    scanf("%lld %lld",&n,&k);
    printf("%d",digit(n,k));
    return 0;
}
