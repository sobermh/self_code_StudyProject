/*************************************************************************
	> File Name: c155.c
	> Author: 
	> Mail: 
	> Created Time: Mon 18 Apr 2022 10:14:30 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n,sum=3,he=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d\n",sum=sum+2*i);
        he+=sum;
    }
    printf("%d",he);
    return 0;
}
