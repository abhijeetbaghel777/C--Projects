#include<stdio.h>
int main(){
    int i;
     int arr[5]={1,2,3,4,5};
   int first=arr[0];
   for ( i = 0; i < 5; i++)
   {
    arr[i]=arr[i+1];
   }
   arr[4]=first;
   for ( i = 0; i < 5; i++)
   {
    /* code */
    printf("\n%d",arr[i]);
   }
   
}