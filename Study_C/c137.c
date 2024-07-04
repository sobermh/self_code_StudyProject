/*************************************************************************
	> File Name: c137.c
	> Author: 
	> Mail: 
	> Created Time: Mon 11 Apr 2022 09:34:10 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char m='A';
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            printf("%c",m);
            m++;
        }
        printf("\n");
    }
    return 0;
}
