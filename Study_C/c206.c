/*************************************************************************
	> File Name: c206.c
	> Author: 
	> Mail: 
	> Created Time: Mon 09 May 2022 07:55:20 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n,m;
    int height[30][30];
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&height[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=height[j][i];
        }
        printf("%d\n",sum);
    }
    return 0;
}
