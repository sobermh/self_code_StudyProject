/*************************************************************************
	> File Name: c148.c
	> Author: 
	> Mail: 
	> Created Time: Wed 13 Apr 2022 10:48:03 AM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(){
    char arr[50];
    char a;
    scanf("%s",arr);
    for(int i=0;i<strlen(arr)/2;i++){
        a=*(arr+i);
        *(arr+i)=*(arr+strlen(arr)-i-1);
        *(arr+strlen(arr)-i-1)=a;
    }
    printf("%s",arr);
    return 0;
}
