/*************************************************************************
	> File Name: c144.c
	> Author: 
	> Mail: 
	> Created Time: Tue 12 Apr 2022 09:51:49 AM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(){
    char arr[100];
    int count=0;
    scanf("%s",arr);
    for(int i=0;i<=strlen(arr)-1;i++){
        if(arr[i]=='A') count++;
    }
    printf("%d",count);
    return 0;
}
