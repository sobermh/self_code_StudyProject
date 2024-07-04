/*************************************************************************
	> File Name: c439.c
	> Author: 
	> Mail: 
	> Created Time: Fri 22 Apr 2022 03:20:08 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    double x,sum=2,each=2;
    int i;
    scanf("%lf",&x);
    for(i=1;sum<=x;i++) {
        each*=0.98;
        sum+=each;
    }
    printf("%d",i);
    return 0;
}
