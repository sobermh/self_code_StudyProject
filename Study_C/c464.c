/*************************************************************************
	> File Name: c464.c
	> Author: 
	> Mail: 
	> Created Time: Tue 26 Apr 2022 08:22:13 AM CST
 ************************************************************************/

#include<stdio.h>
int is_leap_year(int i){
    if((i%4==0 && i%100 !=0 )|| (i%400==0)) return 1;
    else return 0;
}

int main(){
    int x,y,count=0;
    scanf("%d %d",&x,&y);
    for(int i=x;i<=y;i++){
        if(is_leap_year(i)) count++;
    }
    printf("%d",count);
    return 0;
}
