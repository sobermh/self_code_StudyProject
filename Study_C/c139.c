/*************************************************************************
	> File Name: c139.c
	> Author: 
	> Mail: 
	> Created Time: Mon 11 Apr 2022 09:58:20 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i++){
        if(i<=n){
            for(int j=i;j<n;j++) printf(" ");
            for(int k=1;k<=2*i;k++)printf("A");
        }
        else{
            for(int j=i;j>n;j--) printf(" ");
            for(int k=i;k<=2*n-1;k++)printf("AA");
        }
        printf("\n");
    }
    return 0;
}
