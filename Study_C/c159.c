/*************************************************************************
	> File Name: c159.c
	> Author: 
	> Mail: 
	> Created Time: Tue 19 Apr 2022 05:38:15 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    char x;
    scanf("%c",&x);
    char y=x;
    for(char i='A';i<=y;i++){
        for(char j='A';j<i;j++) printf(" ");
        for(char m=x;m>='A';m--) printf("%c",m);
        for(int n=0;n<y-i;n++) printf("%c",'A'+n);
        x-=1;
        printf("\n");
    }
    return 0;
}
