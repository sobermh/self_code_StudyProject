/*************************************************************************
	> File Name: c463.c
	> Author: 
	> Mail: 
	> Created Time: Mon 16 May 2022 08:02:40 AM CST
 ************************************************************************/

#include<stdio.h>

typedef struct windows{
    int left;
    int right;
    int up;
    int down;
}win;

int main(){
    win win1,win2,max;
    scanf("%d %d %d %d",&win1.left,&win1.right,&win1.up,&win1.down);
    scanf("%d %d %d %d",&win2.left,&win2.right,&win2.up,&win2.down);
    max.left=win1.left>win2.left?win1.left:win2.left;
    max.right=win1.right<win2.right?win1.right:win2.right;
    max.up=win1.up>win2.up?win1.up:win2.up;
    max.down=win1.down<win2.down?win1.down:win2.down;
    if(max.right<max.left || max.up>=max.down) printf("0");
    else printf("%d",(max.right-max.left)*(max.down-max.up));
    return 0;
}
