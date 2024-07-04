/*************************************************************************
	> File Name: c145.c
	> Author: 
	> Mail: 
	> Created Time: Tue 12 Apr 2022 03:51:37 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(){
    int n,max=0,flag;
    char arr[21] [100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",arr[i]);
        if(strlen(arr[i])>max) {
            max=strlen(arr[i]);
            flag=i;
        }
    }
    printf("%s",arr[flag]);
    return 0;
}
