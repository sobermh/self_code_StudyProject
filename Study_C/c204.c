/*************************************************************************
	> File Name: c204.c
	> Author: 
	> Mail: 
	> Created Time: Mon 09 May 2022 07:38:13 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    int height[30][30];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&height[i][j]);
        }
    }
    for(int i=0;i<n;i++) printf("%d\n",height[i][i]);
    return 0;
}
