/*************************************************************************
	> File Name: c154.c
	> Author: 
	> Mail: 
	> Created Time: Mon 18 Apr 2022 10:07:08 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=n-i;j>0;j--){
            if(!count) printf("%d",j);
            else printf(" %d",j);
            count++;
        }
        printf("\n");
    }
    return 0;
}
