/*************************************************************************
	> File Name: c448.c
	> Author: 
	> Mail: 
	> Created Time: Mon 16 May 2022 08:44:07 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n,arr[100]={0},num,flag=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&num);
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            flag=0;
            printf("%d",++i);
            break;
        }
    }
    if(flag) printf("0");
    return 0;
}
