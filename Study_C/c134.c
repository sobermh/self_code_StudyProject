/*************************************************************************
> File Name: c134.c
> Author: 
> Mail: 
> Created Time: Sun 10 Apr 2022 10:38:13 PM CST
************************************************************************/

#include<stdio.h>
int main(){
    int a,b;
    int count=0;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        if(i%11==0) {
            count++;
            if(count==1) printf("%d",i);
            else printf(" %d",i);
        }
    }
    return 0;
}
