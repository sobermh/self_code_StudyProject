/*************************************************************************
	> File Name: c197.c
	> Author: 
	> Mail: 
	> Created Time: Thu 12 May 2022 08:01:20 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int arr[10];
    for(int i=0 ;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<9;i++){
        for(int j=0;j<9-i;j++){
            if(arr[j]<arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<10;i++){
        i && printf(" ");
        printf("%d",arr[i]);
    }
    return 0;
}
