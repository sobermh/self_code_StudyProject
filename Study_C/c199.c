/*************************************************************************
	> File Name: c199.c
	> Author: 
	> Mail: 
	> Created Time: Fri 13 May 2022 09:20:55 AM CST
 ************************************************************************/

#include<stdio.h>

int func(int k,int arr[]){
    if(k<10) return k;
    else return arr[0]*func(k-1)+arr[1]*func(k-2)+arr[2]*func(k-3)+arr:
}

int main(){
    int k,m;
    scanf("%d %d",&k,&m);
    int arr[10];
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    func(k,arr);
    return 0;
}
