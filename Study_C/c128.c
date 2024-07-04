/*************************************************************************
	> File Name: c128.c
	> Author: 
	> Mail: 
	> Created Time: Sun 10 Apr 2022 06:01:02 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n,x;
    scanf("%d\n",&n);
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        sum+=x;
    }
    printf("%.2lf",sum/n*1.0);
    return 0;
}
