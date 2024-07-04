/*************************************************************************
	> File Name: c138.c
	> Author: 
	> Mail: 
	> Created Time: Mon 11 Apr 2022 09:42:45 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++) printf("AA");
        printf("\n");
    }
    return 0;
}
