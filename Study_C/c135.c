/*************************************************************************
	> File Name: c135.c
	> Author: 
	> Mail: 
	> Created Time: Sun 10 Apr 2022 11:05:56 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int x,y,m,d;
    scanf("%d",&x);
    scanf("%d%d%d",&y,&m,&d);
    int arr[13]={0,31,28,31,30,31,30,
                31,31,30,31,30,31};
    for(int i=1;i<=x;i++){
        if(y%4==0 && y%100!=0 || y%400==0) arr[2]=29;
        else arr[2]=28;
        if(d==arr[m]){
            d=d-arr[m];
            m=m+1;
        }
        if(m>12){
            m=m-12;
            y=y+1;
        }
        d++;
    }
    printf("%d %d %d",y,m,d);
    return 0;
}
