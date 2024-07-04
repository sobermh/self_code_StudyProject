/*************************************************************************
	> File Name: c440.c
	> Author: 
	> Mail: 
	> Created Time: Fri 22 Apr 2022 03:34:51 PM CST
 ************************************************************************/

#include<stdio.h>


int main(){
    int n,x,sum=0;
    scanf("%d %d",&n,&x);
    for(int i=1;i<=n;i++){
        for(int j=i;j>0;j/=10){
            if(j%10==x) sum+=1;
        }
    }
    printf("%d",sum);
    return 0;
}
