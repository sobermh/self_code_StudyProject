/*************************************************************************
	> File Name: c149.c
	> Author: 
	> Mail: 
	> Created Time: Thu 14 Apr 2022 11:29:49 AM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(){
    char s[50];
    scanf("%[^\n]",s);
    int i=strlen(s)-1,count=0;
    while(*(s+i) != ' '){
        count++;
        i--;
    }
    printf("%d",count);
    return 0;
}
