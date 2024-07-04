/*************************************************************************
	> File Name: hwzs.c
	> Author: 
	> Mail: 
	> Created Time: Fri 15 Apr 2022 04:07:01 PM CST
 ************************************************************************/

#include<stdio.h>
int is_prime(int i){
    for(int j=2;j<i/2;j++){
        if(i%j==0) {
            return 0;
            break;
        }
        return 1;
    }
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        if(is_prime(i)){
            if(i/10000==i%10 && i/1000%10==i/10%10) printf("%d\n",i);
        }
    }
    return 0;
}
