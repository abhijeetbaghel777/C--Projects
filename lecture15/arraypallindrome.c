#include<stdio.h>
int main(){
    int arr[5]={1,2,3,2,1};
    int true=1;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]!=arr[5-i-1])
        {
           true=0; /* code */
        }

        
        
    }
    if (true==1)
    {
       printf(" pallindrome"); /* code */
    }
    else
    printf(" not pallindrome");
    
     
}