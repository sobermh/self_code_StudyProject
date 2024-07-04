/*************************************************************************
	> File Name: c114.c
	> Author: 
	> Mail: 
	> Created Time: Wed 06 Apr 2022 11:22:17 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    char x;
    scanf("%s",&x);
    switch(x){
        case 'h':printf("He");break;
        case 'l':printf("Li");break;
        case 'c':printf("Cao");break;
        case 'd':printf("Duan");break;
        case 'w':printf("Wang");break;
        default:printf("Not Here");
    }
    return 0;
}
