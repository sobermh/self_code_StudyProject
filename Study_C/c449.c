/*************************************************************************
	> File Name: c449.c
	> Author: 
	> Mail: 
	> Created Time: Tue 17 May 2022 07:52:02 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[20][20];
    arr[0][0]=1;
    arr[1][0]=1;
    arr[1][1]=1;
    for(int i=2;i<n;i++){
        for(int j=1;j<i;j++){
            arr[i][0]=1;
            arr[i][i]=1;
            arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            j && printf(" ");
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
