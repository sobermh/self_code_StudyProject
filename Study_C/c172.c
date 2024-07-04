/*************************************************************************
	> File Name: c172.c
	> Author: 
	> Mail: 
	> Created Time: Fri 22 Apr 2022 08:30:02 AM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(){
    char name[10][20];
    for(int i=0;i<10;i++){
        scanf("%s",name[i]);
    }
    for(int i=0;i<9;i++){
        for(int j=0;j<9-i;j++){
            if(strcmp(name[j],name[j+1])>0){
                char temp[20];
                strcpy(temp,name[j]);
                strcpy(name[j],name[j+1]);
                strcpy(name[j+1],temp);
            }
        }
    }
    for(int i=0;i<10;i++){
        printf("%s\n",name[i]);
    }
    return 0;
}
