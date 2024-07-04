/*************************************************************************
	> File Name: c121.c
	> Author: 
	> Mail: 
	> Created Time: Thu 07 Apr 2022 05:19:51 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    char MING[5]="MING";
    char LI[5]="LI";
    char a,b; 
    scanf("%c%c",&a,&b);
    if(a=='O' && b=='Y') printf("%s",MING);
    /*else if (a=='O' && b=='H')printf("%s",*LI);
    else if (a=='O' && b=='O') printf("%s",*TIE);
    else if (a=='Y' && b=='O')printf("%s",*LI);
    else if (a=='Y' && b=='Y')printf("%s",*TIE);
    else if (a=='Y' && b=='H')printf("%s",*MING);
    else if (a=='H' && b=='O')printf("%s",*MING);
    else if (a=='H' && b=='Y')printf("%s",*LI);
    else if (a=='H' && b=='H')printf("%s",*TIE);*/
    return 0;
}
