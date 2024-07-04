/*************************************************************************
	> File Name: 175.c
	> Author: 
	> Mail: 
	> Created Time: Fri 29 Apr 2022 11:50:12 AM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>
int main(){
    int n;
    int you_count=0,liang_count=0,zhong_count=0,cha_count=0;
    scanf("%d",&n);
    char grade[61];
    scanf("%[^\n]",grade);
    for(int i=0;i<strlen(grade);i+=2){
        if(90<=grade[i]) you_count++;
        else if(80<=grade[i] && 89>=grade[i]) liang_count++;
        else if(60<=grade[i] && 79>=grade[i]) zhong_count++;
        else cha_count++;
    }
    printf("You %d\n",you_count);
    printf("Liang %d\n",liang_count);
    printf("Zhong %d\n",zhong_count);
    printf("Cha %d\n",cha_count);
    return 0;
}
