
/*************************************************************************
	> File Name: c187.c
	> Author: 
	> Mail: 
	> Created Time: Fri 06 May 2022 10:05:23 AM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>
/*void  move(int n,char a,char b){
//    printf("%c->%c ",a,b); 打印每一次的移动
//    k++;//移动的总次数
//    sum+=n;//移动n，消耗n的体力，移动所消耗的所有体力
}


void  hannuota(int n,char a,char b,char c){
    if(n==1) {
        move(n,a,b);//迭代的出口，当只有一个盘子时，直接从a移动到b
    }
    else {
        hannuota(n-1,a,b,c);//迭代，n-1个盘子都是在a通过b然后到缓冲区c
        move(n,a,b);//移动完n-1后，移动n，从a到终点b
        hannuota(n-1,c,a,b);//迭代，n-1个盘子在c通过a然后到终点b
    }
}
*/
long long int sum(long long int n){
    if(n==1) return 1;
    else return sum(n-1)*2+n;
}

int main(){
    long long int n;
    scanf("%lld",&n);
    
    //hannuota(n,'a','b','c');//引用汉诺塔函数，传入参数：数量和三个柱子
    printf("%lld %lld",sum(n)-sum(n-1),sum(n));//打印移动次数和消耗体力
    return 0;
}
