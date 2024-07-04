/*************************************************************************
	> File Name: c181.c
	> Author: 
	> Mail: 
	> Created Time: Tue 10 May 2022 08:10:22 AM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(){
    char arr[100];
    scanf("%s",arr);
    for(int i=0;i<strlen(arr);i++){
        if(arr[i]>='a' && arr[i]<='z') arr[i]-=32;
        else arr[i]+=32;
    }
    printf("%s",arr);
    return 0;
}
