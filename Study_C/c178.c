/*************************************************************************
	> File Name: c178.c
	> Author: 
	> Mail: 
	> Created Time: Thu 05 May 2022 11:04:09 AM CST
 ************************************************************************/

#include<stdio.h>

void func(int n){
    char ch='A';
    if(n==1){
        printf("%c",ch);
    }
    else{
        func(n-1);
        printf("%c",ch+n-1);
        func(n-1);
    }
}


int main(){
    int n;
    scanf("%d",&n);
    func(n);
    return 0;
}
