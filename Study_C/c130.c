/*************************************************************************
	> File Name: c130.c
	> Author: 
	> Mail: 
	> Created Time: Sun 10 Apr 2022 06:25:01 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    double sum=0;
    for(int i=1;i<=n;i++){
        sum=(sum+m)*1.00417;
    }
    printf("$%.2lf",sum);
    return 0;
}
