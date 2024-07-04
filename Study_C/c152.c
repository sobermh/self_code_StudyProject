/*************************************************************************
	> File Name: c152.c
	> Author: 
	> Mail: 
	> Created Time: Fri 15 Apr 2022 02:19:47 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char arr[7][20]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    if(n+3<8) printf("%s",arr[n+2]);
    else printf("%s",arr[n+2-7]);
    return 0;
}
