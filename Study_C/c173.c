/*************************************************************************
	> File Name: c173.c
	> Author: 
	> Mail: 
	> Created Time: Thu 28 Apr 2022 09:00:36 AM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(){
    char arr[100];
    int count_alpha=0,count_digit=0,count_space=0,count_other=0;
    gets(arr);
    for(int i=0;i<strlen(arr);i++){
        if(('a'<=arr[i] && 'z'>=arr[i]) || ('A'<=arr[i] && 'Z'>=arr[i])) count_alpha++;
        if(arr[i]>='1' && arr[i]<='9') count_digit++;
        if(arr[i]==' ') count_space++;
    }
    printf("%d %d %d %d",count_alpha,count_digit,count_space,strlen(arr)-count_alpha-count_digit-count_space);
    return 0;
}
