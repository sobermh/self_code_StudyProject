/*************************************************************************
	> File Name: c203.c
	> Author: 
	> Mail: 
	> Created Time: Sun 24 Apr 2022 10:50:13 AM CST
 ************************************************************************/

#include<stdio.h>
int max(int arr[][10],int i,int m){
    int max_height=0;
    for(int j=0;j<m;j++){
        if(max_height<arr[j][i]) max_height=arr[j][i];
    }
    return max_height;
}
void sort(int arr[][10], int m,int n){
    int arr_one[100],index=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr_one[index++]=arr[i][j];
        }
    }
    for(int i=0;i<m*n-1;i++){
        for(int j=0;j<m*n-i-1;j++){
            if(arr_one[j]<arr_one[j+1]){
                int temp=arr_one[j];
                arr_one[j]=arr_one[j+1];
                arr_one[j+1]=temp;
            }
        }
    }
    for(int i=0;i<m*n;i++) {
        i && printf(" ");
        printf("%d",arr_one[i]);
    }
}

int high_average(int arr[][10],int average,int m ,int n){
    int count=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]>=average) count++;
        }
    }
    return count;
}


int main(){
    int m,n;
    double sum=0;
    int arr[10][10];
    scanf("%d %d",&m,&n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
            sum+=arr[i][j];
        }
    }
    int average=(int)(sum/(m*n)+0.5);
    for(int i=0;i<n+3;i++){
        if(i<n) printf("%d\n",max(arr,i,m));
        else if(i==n){
            sort(arr,m,n);
            printf("\n");
        }
        else if(i==n+1) printf("%d\n",average);
        else printf("%d",high_average(arr,average,m,n));
    }
    return 0;
}
