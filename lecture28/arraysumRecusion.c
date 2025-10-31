#include<stdio.h>
int  arraysum(int arr[],int n){
    if(n==0){
        return 0;
    }
    return arr[n-1]+arraysum(arr,n-1);
}
int main()
{
    int arr[3]={3,4,1};
    int num=3;
    int data=arraysum(arr,n);
    printf("%d",data);
}