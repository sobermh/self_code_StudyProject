/*************************************************************************
	> File Name: c438.c
	> Author: 
	> Mail: 
	> Created Time: Thu 21 Apr 2022 11:59:44 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    double sum=0;
    scanf("%d",&n);
    int x=n;
    if(x<=240) sum=n*0.4783;
    else{ 
        sum=240*0.4783;
        n-=240;
        if(x<=400) sum+=n*0.5283;
        else{
            sum+=160*0.5283;
            n-=160;
            sum+=n*0.7783;
        }
    }
    printf("%.1lf",sum);
    return 0;
}
