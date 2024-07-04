/*************************************************************************
	> File Name: c110.c
	> Author: 
	> Mail: 
	> Created Time: Tue 05 Apr 2022 11:31:43 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    double x;
    scanf("%lf",&x);
    if(x<=15)printf("%.2lf",x*6);
    if(x>15)printf("%.2lf",90+(x-15)*9);
    return 0;
}
