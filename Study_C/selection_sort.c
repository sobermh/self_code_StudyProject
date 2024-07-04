/*************************************************************************
	> File Name: sort.c
	> Author: 
	> Mail: 
	> Created Time: Thu 19 May 2022 08:17:36 AM CST
 ************************************************************************/

#include<stdio.h>

void selection_sort(int *num,int n){
    for(int i=0;i<n-2;i++){
        int ind=i;
        for(int j=i+1;j<n;j++){
            if(num[j]<num[ind]){
                ind=j;
            }
        }
        int t=num[i];
        num[i]=num[ind];
        num[ind]=t;
    }
}

int main(){
    int n,num[105];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    selection_sort(num,n);

    for(int i=0;i<n;i++){
        printf("%d ",num[i]);
    }
    printf("\n");
    return 0;
}
