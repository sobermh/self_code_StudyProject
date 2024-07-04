/*************************************************************************
	> File Name: c146.c
	> Author: 
	> Mail: 
	> Created Time: Wed 13 Apr 2022 09:41:17 AM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(){
    char arr[51];
    scanf("%s",arr);
    for(int i =0;i<strlen(arr);i++){
        if(*(arr+i)=='z') *(arr+i)='a';
        else if(*(arr+i)=='Z') *(arr+i)='A';
        else if((*(arr+i)>='A' && *(arr+i)<='Z') || *(arr+i)>='a' && *(arr+i)<='z')*(arr+i)=*(arr+i)+1;
    }
    printf("%s",arr);
    return 0;
}
