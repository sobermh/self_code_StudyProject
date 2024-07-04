/*************************************************************************
	> File Name: c163.c
	> Author: 
	> Mail: 
	> Created Time: Wed 20 Apr 2022 05:29:53 PM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int main(){
    double a,b,angle;
    scanf("%lf%lf%lf",&a,&b,&angle);
    double pi=acos(-1);
    printf("%.6lf",sqrt(a*a+b*b-2*a*b*cos(angle/180*pi)));
    return 0;
}
