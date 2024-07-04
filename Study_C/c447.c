/*************************************************************************
	> File Name: c447.c
	> Author: 
	> Mail: 
	> Created Time: Mon 25 Apr 2022 10:14:21 AM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(){
    int lucky_num[]={4,7,47,74,477,474,777,444,774,747,447,744};
    int n,flag=0;
    scanf("%d",&n);
    for(int i=0;i<sizeof(lucky_num)/4-1;i++){
        if(n%lucky_num[i]==0) {
            flag=1;
            printf("YES");
            break;
        }
    }
    if(!flag) printf("NO");
    return 0;
}
