#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the size:");
    scanf("%d",&n);
    int *arr=(int *)malloc(n* sizeof(int));

    printf("Enter %d elements:\n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nNow enter new size:");
    int newsize;
    scanf("%d",&newsize);
    arr=(int *)realloc(arr,newsize * sizeof(int));

    printf("Enter %d new elements:\n",newsize);
    for(int i=0; i< newsize; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < newsize; i++)
    {
        printf("\n%d",arr[i]);
    }
    
}
    
    