/*************************************************************************
	> File Name: c157.c
	> Author: 
	> Mail: 
	> Created Time: Mon 18 Apr 2022 12:38:22 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    char x='A';
    scanf("%d",&n);
    char y=x+n-1;
    for(int i=0;i<2*n-1;i++){
        if(i<n-1){
            for(int j=i;j>0;j--) printf(" ");
            for(int k=0;k<n-i;k++) printf("%c",x+k);
            for(int m=0;m<n-i-1;m++) printf("%c",y-m-1);
            x+=1;
        }
        else if(i==n-1){
            for(int i=0;i<n-1;i++) printf(" ");
            printf("%c",y);
            x-=1;
        }
        else {
            for(int j=i;j<2*n-2;j++) printf(" ");
            for(int k=0;k<i-n+2;k++) printf("%c",x+k);
            for(int m=0;m<i-n+1;m++) printf("%c",y-m-1);
            x-=1;
        }
        printf("\n");
    }
    return 0;
}
