/*************************************************************************
	> File Name: c182.c
	> Author: 
	> Mail: 
	> Created Time: Wed 11 May 2022 07:58:16 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n,max=0;
    int arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max) max=arr[i];
    }
    printf("%d",max);
    return 0;
}
