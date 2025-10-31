#include<stdio.h>
int sum(int a)
{
    if(a==0){
        return 0;
    }
    return a+sum(a-1);
}
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int data=sum(num);
    printf("\n%d",data);
}