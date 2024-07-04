/*************************************************************************
	> File Name: c119.c
	> Author: 
	> Mail: 
	> Created Time: Thu 07 Apr 2022 10:16:01 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int y,m,d;
    scanf("%d%d%d",&y,&m,&d);
    for(int i=0;i<2;i++){
        if(0==i){
            if(m==1 && 1==d) printf("%d %d %d",y-1,12,31);
            else if(3==m && 1==d){
                if(y%4==0 && y%100!=0 || y%400==0){
                printf("%d %d %d",y,2,29);
            }
            else printf("%d %d %d",y,2,28);
            }
            else if ((m==2 || 4 || 6 || 8 || 9 || 11) && d==1) printf("%d %d %d",y,m-1,31);
            else if ((m==5 || 7 || 10 || 12) && 1==d) printf("%d %d %d",y,m-1,30);
            else printf("%d %d %d",y,m,d-1);
            printf("\n");
        }
        else {
            if(12==m && 31==d) printf("%d %d %d",y+1,1,1);
            else if (m==2 && 29==d && (y%4==0 && y%100!=0 || y%400==0)) printf("%d %d %d",y,3,1);
            else if (m==2 && 28==d){
                if((y%4==0 && y%100!=0) || y%400==0) printf("%d %d %d",y,2,29);
                else printf("%d %d %d",y,3,1);
            }
            else if ((m==1 || 3 || 5 || 7 || 8 ||10 ) && d==31) printf("%d %d %d",y,m+1,1);
            else if ((m == 4 || 6 || 9 || 11) && d==30) printf("%d %d %d",y,m+1,1);
            else printf("%d %d %d",y,m,d+1);
        }
    }
    return 0;
}
