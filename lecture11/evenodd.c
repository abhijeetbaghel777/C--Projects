#include<stdio.h>
void evenodd(int num){
    
    if(num%2==0)
    printf("\nNumber is even.");
    else
    printf("\nNumber is odd.");
    
}
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    evenodd(number);
    return 0;
}