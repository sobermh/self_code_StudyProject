/*************************************************************************
	> File Name: c446.c
	> Author: 
	> Mail: 
	> Created Time: Mon 25 Apr 2022 08:38:24 AM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int num[n][n];
    int k=ceil(n*1.0/2);
    for(int i=k;i>0;i--){
        for(int j=0;j<n;j++){
            num[i-1][j]=i;
            num[n-i][j]=i;
            num[j][i-1]=i;
            num[j][n-i]=i;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            j && printf(" ");
            printf("%d",num[i][j]);
        }
        printf("\n");
    }
    return 0;
}
