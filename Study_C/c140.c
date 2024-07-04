/*************************************************************************
	> File Name: c140.c
	> Author: 
	> Mail: 
	> Created Time: Mon 11 Apr 2022 10:46:36 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char m='A';
    for(int i=1;i<=2*n-1;i++){
        if(i<n){
            for(int j=i;j<n;j++) printf(" ");
            for(int k=1;k<=2*i-1;k++) printf("%c",m);
            m++;
        }
        else{
            for(int j=i;j>n;j--) printf(" ");
            for(int k=1;k<=2*(2*n-1-i)+1;k++) printf("%c",m);
            m--;
        }
        printf("\n");
    }
    return 0;
}
