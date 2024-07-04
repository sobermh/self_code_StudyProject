/*************************************************************************
	> File Name: c131.c
	> Author: 
	> Mail: 
	> Created Time: Sun 10 Apr 2022 10:19:37 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n,x,min,max;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        if(i==0){
            min=x;
            max=x;
        }
        if(x>max) max=x;
        if(x<min) min=x;
    }
    printf("%d",max-min);
    return 0;
}
