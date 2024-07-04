/*************************************************************************
    > File Name: c151.c
    > Author: 
    > Mail: 
    > Created Time: Fri 15 Apr 2022 11:46:51 AM CST
 ************************************************************************/

#include<stdio.h>
int game(char a,char b){
    if(a=='Y' && b=='H' || a=='O' && b=='Y' || a=='H' && b=='O') return 1;
    else if(a=='Y' && b=='O' || a=='O' && b=='H' || a=='H' && b=='Y') return -1;
    else return 0;
}


int main(){
    char ming[3],lihua[3];
    for(int i=0;i<2;i++) scanf("%s",&ming[i]);
    for(int j=0;j<2;j++) scanf("%s",&lihua[j]);
    if(game(ming[0],lihua[0])==1){
        if(game(ming[0],lihua[1]) != -1) printf("MING");
        else{
            if(game(ming[1],lihua[1])==1) printf("MING");
            else printf("LIHUA");
        }
    }
    else if(game(ming[0],lihua[0])==0){
        if(game(ming[1],lihua[1])==1) printf("MING");
        else if(game(ming[1],lihua[1])==-1) printf("liHUA");
        else printf("TIE");
    }
    else{
        if(game(ming[1],lihua[0])!=1) printf("LIHUA");
        else{
            if(game(ming[1],lihua[1])!=-1) printf("MING");
            else printf("LIHUA");
        }
    }
    return 0;
}
