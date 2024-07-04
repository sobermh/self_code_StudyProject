/*************************************************************************
	> File Name: sort.c
	> Author: 
	> Mail: 
	> Created Time: Thu 19 May 2022 08:17:36 AM CST
 ************************************************************************/

#include<stdio.h>


void quick_sort(int *num,int left,int right){
    if(left>=right){
        return ;
    }
    int t = num[left];
    int l=left,r=right;
    while(l < r){
        while(l<r && num[r]>=t){
            r--;
        }
        if(l<r){
            num[l]=num[r];
        }
        while(l<r && num[l]<=t){
            l++;
        }
        if(l<r){
            num[r]=num[l];
        }
    }
    num[l]=t;
    quick_sort(num,left,l-1);
    quick_sort(num,l+1,right);
}

int main(){
    int n,num[105];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    quick_sort(num,0,n-1);

    for(int i=0;i<n;i++){
        printf("%d ",num[i]);
    }
    printf("\n");
    return 0;
}
