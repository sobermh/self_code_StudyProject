/*************************************************************************
	> File Name: c174.c
	> Author: 
	> Mail: 
	> Created Time: Thu 28 Apr 2022 10:09:44 AM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(){
    char arr[1000000];
    gets(arr);
    
    for(int i=0;i<strlen(arr);i++){
        if(arr[i]!=' ') printf("%c",arr[i]);
        else printf("%%20");
    }
    return 0;
}
