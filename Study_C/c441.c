/*************************************************************************
	> File Name: c441.c
	> Author: 
	> Mail: 
	> Created Time: Sun 24 Apr 2022 08:26:34 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int x,n,sum=0;
    scanf("%d %d",&x,&n);
    for(int i=0;i<n;i++){
        if(x>0 && x<6) sum+=2;
        else if(x==7) x=0;
        x++;
    }
    printf("%d",sum);
    return 0;
}
