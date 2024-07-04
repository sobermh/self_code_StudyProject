/*************************************************************************
	> File Name: huiwenzhishu.c
	> Author: 
	> Mail: 
	> Created Time: Fri 06 May 2022 11:25:19 PM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int is_prime(int x){
    if(x==1) return 0;
    for(int i=2;i<sqrt(x);i++){
        if(x%i==0) return 0;
    }
    return 1;
}

int is_huiwen(int x){
    int fan=0;
    int flag=x;
    do{
        fan*=10;
        fan+=x%10;
        x/=10;
    }while(x>0);
    if(fan==flag) return 1;
    else return 0;
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        if(is_prime(i)){
            if(is_huiwen(i)){ 
                printf("%d\n",i);
            }
        }
    }
    return 0;
}
