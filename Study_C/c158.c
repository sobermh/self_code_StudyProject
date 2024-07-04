/*************************************************************************
	> File Name: c158.c
	> Author: 
	> Mail: 
	> Created Time: Tue 19 Apr 2022 03:09:46 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=2*n+1;i++){
        if(i<n+1){
            for(int j=i;j>1;j--) printf(" ");
            printf("%d",n-i+1);
            for(int m=1+2*(i-1);m<2*n;m++) printf(" ");
            printf("%d",n-i+1);
        }
        else if(i==n+1){
            for(int j=1;j<=n;j++) printf(" ");
            printf("0");
        }
        else{
            for(int j=0;j<(2*n+1)-i;j++) printf(" ");
            printf("%d",i-n-1);
            for(int m=1+2*(i-n-1-1);m>0;m--) printf(" ");
            printf("%d",i-n-1);
        }
        printf("\n");
    }
    return 0;
}
