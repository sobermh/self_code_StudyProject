/*************************************************************************
	> File Name: c143.c
	> Author: 
	> Mail: 
	> Created Time: Tue 12 Apr 2022 09:02:09 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int a,b;
    int count=0;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++){
        if(i%6==0){
            int flag=1;
            for(int j=2;j<i/100;j++){
                if((i/100)%j==0){
                    flag=0;
                    break;
                } 
            }
            if(flag){
                for(int k=2;k<10;k++){
                    if(k*k==i%100){
                        if(!count) printf("%d",i);
                        else printf(" %d",i);
                        count++;
                    }
                }
            }
        }
    }
    printf("\n");
    printf("%d",count);    
    return 0;
}
