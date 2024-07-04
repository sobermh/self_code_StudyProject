/*************************************************************************
	> File Name: c141.c
	> Author: 
	> Mail: 
	> Created Time: Mon 11 Apr 2022 01:15:08 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char m='A';
    for(int i=1;i<=2*n+1;i++){
        if(i<n+1){
            char m1=m;
            for(int j=1;j<i;j++) printf(" ");
            for(int k=1;k<=2*(n+1-i)+1;k++){
                if(k<n+1-i+1){
                    printf("%c",m1);
                    m1++;
                }
                else{
                    printf("%c",m1);
                    m1--;
                }
            }
            m++;
        }
        else{
            char m2=m;
            for(int j=1;j<=2*n+1-i;j++) printf(" ");
            for(int k=1;k<=2*(i-n-1)+1;k++){
                if(k<i-n-1+1){
                    printf("%c",m2);
                    m2++;
                }
                else{
                    printf("%c",m2);
                    m2--;
                }
            }
            m--;
        }
        printf("\n");
    }
    return 0;
}
