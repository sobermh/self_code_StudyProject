/*************************************************************************
	> File Name: huiwen.c
	> Author: 
	> Mail: 
	> Created Time: Mon 11 Apr 2022 04:38:43 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int fuc(char f[]){
    int a=0,b=strlen(f)-1;
    while(a<=b){
        if(f[a++]!=f[b--]) return 0;
    }
    return 1;
}

int main(){
    char f[30];
    scanf("%s",f);
    if(fuc(f)) printf("yes\n");
    else printf("no");
    return 0;
}
