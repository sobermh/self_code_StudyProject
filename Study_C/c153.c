/*************************************************************************
	> File Name: c153.c
	> Author: 
	> Mail: 
	> Created Time: Mon 18 Apr 2022 09:37:02 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int y,m,d;
    scanf("%d %d %d",&y,&m,&d);
    int j,k;
    int arr[7]={6,7,1,2,3,4,5};
    if(m==1){
        y=y-1;
        m=13;
    }
    else if(m==2){
        y=y-1;
        m=14;
    }
    j=y/100;
    k=y%100;
    printf("%d",arr[(d+26*(m+1)/10+k+k/4+j/4+5*j)%7]);
    return 0;
}
