/*************************************************************************
	> File Name: c205.c
	> Author: 
	> Mail: 
	> Created Time: Mon 09 May 2022 07:48:24 AM CST
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
    for(int i=0;i<n;i++){
        double sum=0;
        for(int j=0;j<m;j++){
            sum+=height[i][j];
        }
        printf("%.6lf\n",sum/m);
    }
    return 0;
}
