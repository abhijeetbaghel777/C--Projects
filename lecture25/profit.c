#include<stdio.h>
int main(){
    int n;
    printf("Enter the no of days:");
    scanf("%d",&n);
    printf("\nEnter the amount:");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */scanf("%d",&arr[i]);
    }
    
    int min=arr[0];
    int j=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<min)
        {
           min=arr[i]; 
            j=i;
        }
        
    }
    int max=0;
    for (int i = j; i < n; i++)
    {
        if(max<arr[i]){
            max=arr[i];
        }
    }
    
    printf("profit=%d",max-min);
    
}