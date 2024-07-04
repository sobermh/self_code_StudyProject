/*************************************************************************
	> File Name: c150.c
	> Author: 
	> Mail: 
	> Created Time: Thu 14 Apr 2022 01:14:43 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[n][m] ,arr2[m][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int k=0;k<m;k++){
        for(int z=0;z<n;z++){
            arr2[k][z]=arr[n-z-1][k];
            if(z==0) printf("%d",arr2[k][z]);
            else printf(" %d",arr2[k][z]);
        }
        printf("\n");
    }
    return 0;
}
