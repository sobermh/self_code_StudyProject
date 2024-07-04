/*************************************************************************
	> File Name: sort.c
	> Author: 
	> Mail: 
	> Created Time: Thu 19 May 2022 08:17:36 AM CST
 ************************************************************************/

#include<stdio.h>

void insertion_sort(int *num,int n){
    for(int i=1;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(num[j]>num[j+1]){
                int t=num[j];
                num[j]=num[j+1];
                num[j+1]=t;
            }
            else{
                break;
            }
        }
    }
}

int main(){
    int n,num[105];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    insertion_sort(num,n);
    for(int i=0;i<n;i++){
        printf("%d ",num[i]);
    }
    printf("\n");
    return 0;
}
