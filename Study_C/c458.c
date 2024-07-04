/*************************************************************************
	> File Name: c458.c
	> Author: 
	> Mail: 
	> Created Time: Mon 09 May 2022 08:02:09 AM CST
 ************************************************************************/

#include<stdio.h>

typedef struct birthday{
    int year;
    int month;
    int day;
}birthday;


typedef struct student{
    char name[100];
    char sexy[10];
    birthday birth;
}student;

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        student i;
        scanf("%s %s %d %d %d",i.name,i.sexy,&i.birth.year,&i.birth.month,&i.birth.day);
    }
    return 0;
}
