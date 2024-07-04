/*************************************************************************
	> File Name: c444.c
	> Author: 
	> Mail: 
	> Created Time: Sun 24 Apr 2022 11:30:20 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n,x;
    scanf("%d",&n);
    int arr[98]={0};
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&x);
    int insert=arr[n-1];
    for(int i=n-2;i>=x-1;i--){
        arr[i+1]=arr[i];
    }
    arr[x-1]=insert;
    for(int i=0;i<n;i++){
        if(i==0) printf("%d",arr[i]);
        else printf(" %d",arr[i]);
    }
    return 0;
}
