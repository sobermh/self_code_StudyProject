/*************************************************************************
	> File Name: c160.c
	> Author: 
	> Mail: 
	> Created Time: Mon 18 Apr 2022 01:34:29 PM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define pi 3.14
int main(){
    double r,h;
    scanf("%lf %lf",&r,&h);
    double sce;
    sce=(2*pi*r/2+2*r+sqrt(2*r*2*r+2*r*2*r))*h;
    printf("%.2lf",sce+pi*r*r/2+pi*r*r/2+2*r*2*r/2+2*r*2*r/2);
    return 0;
}
