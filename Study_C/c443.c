/*************************************************************************
	> File Name: c443.c
	> Author: 
	> Mail: 
	> Created Time: Sun 24 Apr 2022 10:52:22 AM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(){
    int l,m,arr[101][2],count=0;
    scanf("%d %d",&l,&m);
    int sum[10001]={0};
    for(int i=0;i<m;i++){
        scanf("%d %d",&arr[i][0],&arr[i][1]);
        for(int j=0;j<=l;j++){
            if(j>=arr[i][0] && j<=arr[i][1]) sum[j]=1; 
        }
    }
    for(int i=0;i<=l;i++){
        if(sum[i]==1) count++;
    }
    printf("%d",l-count+1);
    return 0;
}
