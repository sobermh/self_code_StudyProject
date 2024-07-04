/*************************************************************************
	> File Name: 116.c
	> Author: 
	> Mail: 
	> Created Time: Wed 06 Apr 2022 11:48:16 AM CST
 ************************************************************************/

#include<stdio.h>


int judge(int x,int y,int max){
    if (x*x+y*y>max*max) printf("acute triangle");
    else if (x*x+y*y==max*max) printf("right triangle");
    else if (x*x+y*y<max*max) printf("obtuse triangle");
    return 0;
}
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && b>c){
        if(a+c<=b){
            printf("illegal triangle");
        }
        else judge(a,c,b);
    }
    else if (a>b && a>c) {
        if(b+c<=a){
            printf("illegal triangle");
        }
        else judge(b,c,a);
    }
    else if (c>a && c>b){
        if(a+b<=c){
            printf("illegal triangle");
        }
        else judge(a,b,c);
    }
    return 0;
}
