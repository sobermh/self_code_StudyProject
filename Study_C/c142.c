/*************************************************************************
	> File Name: c142.c
	> Author: 
	> Mail: 
	> Created Time: Mon 11 Apr 2022 02:57:57 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int count=0;
    for(int i=a;i<=b;i++){
        int flag=1;
        for(int j=2;j<i/2;j++){
            if(i%j==0) {
                flag=0;
                break;
            }
        }
        if(flag ==1 &&  i%10 == i/10000 && i/1000%10 == i/10%10) {
            if(!count) printf("%d",i);
            else printf(" %d",i);
            count++;
        }
    }
    return 0;
}
