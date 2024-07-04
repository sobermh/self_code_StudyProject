/*************************************************************************
	> File Name: test9.c
	> Author: 
	> Mail: 
	> Created Time: Tue 05 Apr 2022 10:31:13 PM CST
 ************************************************************************/



#include<stdio.h>


int main(){
    char str[]="hello world";
    char src[]={'k','a','i','k','e','b','a','\0'};
    printf("sizeof(str)=%lu\n",sizeof(str));
    printf("sizeof(src)=%lu\n",sizeof(src));
    printf("str=%s\n",str);
    printf("src=%s\n",src);
    return 0;
}

