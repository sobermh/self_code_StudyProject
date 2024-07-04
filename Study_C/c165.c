/*************************************************************************
	> File Name: c165.c
	> Author: 
	> Mail: 
	> Created Time: Thu 21 Apr 2022 07:54:18 AM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int main(){
    long c;
    int count=0;
    scanf("%ld",&c);
    for(long a=1;a<=c;a++){
        double b=sqrt(c*c-a*a);
        if(a+(int)b>c && a-(int)b<c && a>=(int)b && b==(int)b) count++;
    }
    printf("%d",count);
    return 0;
}
