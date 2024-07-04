/*************************************************************************
	> File Name: c125.c
	> Author: 
	> Mail: 
	> Created Time: Fri 08 Apr 2022 04:27:02 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int h,m,s,t;
    scanf("%d %d %d %d",&h,&m,&s,&t);
    int sum;
    sum=t+h*3600+m*60+s;
    if(sum<43200)printf("%d:%d:%dam\n",sum/3600,sum%3600/60,sum%3600%60);
    else if(sum==43200)printf("%d:%d:%dpm\n",sum/3600,sum%3600/60,sum%3600%60);
    else if(sum<86400)printf("%d:%d:%dpm\n",sum/3600-12,sum%3600/60,sum%3600%60);
    else if(sum==86400)printf("%d:%d:%dam\n",sum/3600-12,sum%3600/60,sum%3600%60);
    else if(sum<=129600)printf("%d:%d:%dam\n",sum/3600-24,sum%3600/60,sum%3600%60);
    else if(sum<=172800)printf("%d:%d:%dpm\n",sum/3600-36,sum%3600/60,sum%3600%60);
    printf("%.2lf%%",t/86400.0*100);
    return 0;
}
