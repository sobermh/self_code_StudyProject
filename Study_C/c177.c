/*************************************************************************
	> File Name: c177.c
	> Author: 
	> Mail: 
	> Created Time: Thu 05 May 2022 10:18:21 AM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(){
    char arr[26],arr1[26];
    scanf("%s",arr);
    strcpy(arr1,arr);
    for(int i=0;i<strlen(arr);i++){
        char str1[26]={0},str2[26]={0};
        printf("%s\n",arr1);
        strncpy(str1,&arr1[strlen(arr1)-2],2);
        strncpy(str2,arr1,strlen(arr1)-2);
        strcat(str1,str2);
        strcpy(arr1,str1);
    }
    return 0;
}
