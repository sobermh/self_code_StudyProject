/*************************************************************************
	> File Name: c198.c
	> Author: 
	> Mail: 
	> Created Time: Fri 13 May 2022 08:50:07 AM CST
 ************************************************************************/

#include<stdio.h>


int main(){
    long long int n;
    long int arr[100005];
    arr[1]=1;
    arr[2]=1;
    scanf("%lld",&n);
    for(int i=3;i<=n;i++){
        arr[i]=(arr[i-1]+arr[i-2])%1000000007;
    }
    printf("%ld",arr[n]);
    return 0;
}
