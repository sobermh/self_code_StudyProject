/*************************************************************************
	> File Name: c156.c
	> Author: 
	> Mail: 
	> Created Time: Mon 18 Apr 2022 10:24:36 AM CST
 ************************************************************************/

#include<stdio.h>
int is_prime(int n){
    for(int i=2;i<=n/2;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int is_ok(int a){
    int ab=a/100;
    int cb=a%100;
    int flag1=0, flag2=0;
    for(int i=1;i<10;i++){
        if(ab==i*i) flag1=1;
    }
    for(int i=1;i<10;i++){
        if(cb==i*i) flag2=1;
    }
    if(flag1 && flag2) return 1;
    else return 0;
}

int main(){
    int a,b,count=0;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        if(is_prime(i) && is_ok(i)){
                if(!count) printf("%d",i);
                else printf(" %d",i);
                count++;
        }
    }
    printf("\n");
    printf("%d",count);
    return 0;
}
