/*************************************************************************
	> File Name: c176.c
	> Author: 
	> Mail: 
	> Created Time: Thu 05 May 2022 08:42:27 AM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(){
    char nv[1000],lu[1000];
    gets(nv);
    gets(lu);
    int count=0;
    for(int i=0;i<strlen(nv);i++){
        if(strncmp(lu,&nv[i],strlen(lu))==0) count++;
    }
    printf("%d",count);
    return 0;
}
