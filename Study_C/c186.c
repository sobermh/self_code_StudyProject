/*************************************************************************
	> File Name: c186.c
	> Author: 
	> Mail: 
	> Created Time: Fri 06 May 2022 09:40:07 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n,count=0,index=0;
    int arr[100000]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    while(index<n){
        index+=arr[index];
        count++;
    }
    printf("%d",count);
    return 0;
}
