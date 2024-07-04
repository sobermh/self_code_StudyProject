/*************************************************************************
	> File Name: sort.c
	> Author: 
	> Mail: 
	> Created Time: Thu 19 May 2022 08:17:36 AM CST
 ************************************************************************/

#include<stdio.h>

void bubble_sort(int *num,int n){
    for(int i=1;i<n;i++){
        int flag=0;
        for(int j=0;j<n-i;j++){
            if(num[j]>num[j+1]){
                int t=num[j];
                num[j]=num[j+1];
                num[j+1]=t;
                flag=1;
            }
        }
        if(!flag) break;
    }
}

int main(){
    int n,num[105];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    bubble_sort(num,n);

    for(int i=0;i<n;i++){
        printf("%d ",num[i]);
    }
    printf("\n");
    return 0;
}
