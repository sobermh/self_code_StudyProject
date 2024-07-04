/*************************************************************************
	> File Name: c113.c
	> Author: 
	> Mail: 
	> Created Time: Wed 06 Apr 2022 10:38:20 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int y,m;
    scanf("%d%d",&y,&m);
    int arr[15]={0,31,28,31,30,31,30,
                 31,31,30,31,30,31};
    if((y%4==0 && y%100!=0) || (y%400==0)){
        if(2==m) printf("29");
        else printf("%d",arr[m]);
    }
    else printf("%d",arr[m]);
    return 0;
}
