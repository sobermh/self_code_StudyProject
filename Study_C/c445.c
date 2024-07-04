/*************************************************************************
	> File Name: c445.c
	> Author: 
	> Mail: 
	> Created Time: Sun 24 Apr 2022 11:50:40 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n,hi[1000],count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&hi[i]);
    }
    for(int i=0;i<n;i++){
        int flag=hi[i],first_count=0,before_count=0;
        for(int j=0;j<i;j++){
            if(hi[j]>hi[i]) first_count++;
        }
        for(int j=i+1;j<n;j++){
            if(hi[j]>hi[i]) before_count++;
        }
        if(first_count==before_count) count++;
    }
    printf("%d",count);
    return 0;
}
