/*************************************************************************
	> File Name: c133.c
	> Author: 
	> Mail: 
	> Created Time: Sun 10 Apr 2022 10:28:36 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            if(i==j) printf("%d*%d=%d",i,j,i*j);
            else printf("\t%d*%d=%d",i,j,i*j);
            if(j==n) printf("\n");
        }
    }
    return 0;
}
