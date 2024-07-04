/*************************************************************************
	> File Name: c442.c
	> Author: 
	> Mail: 
	> Created Time: Sun 24 Apr 2022 08:46:57 AM CST
 ************************************************************************/

#include<stdio.h>
int func(int n){
    if(n==0) return 1;
    if(n==1) return 2;
    else return func(n-1)+func(n-2);
}
int main(){
    int n;
    int arr[31];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(i==0) printf("%d",arr[i]=func(i));
        else printf(" %d",arr[i]=func(i));
    }
    return 0;
}
