/*************************************************************************
	> File Name: c129.c
	> Author: 
	> Mail: 
	> Created Time: Sun 10 Apr 2022 06:17:15 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int n,x;
    int min=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        if(i==0)min=x;
        if(x<min) min=x;
    }
    printf("%d",min);
    return 0;
}
