/*************************************************************************
	> File Name: c117.c
	> Author: 
	> Mail: 
	> Created Time: Wed 06 Apr 2022 05:28:04 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<10) printf("YES");
    else if (a<100 && (a/10==a%10)) printf("YES");
    else if (a<1000 && (a/100==a%10)) printf("YES");
    else if (a<10000 && (a/1000==a%10) && (a/100%10==a/10%10)) printf("YES");
    else printf("NO");
    return 0;
}
