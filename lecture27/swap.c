#include<stdio.h>
int main(){
    printf("Enter the first number:");
    int a,b;
    scanf("%d",&a);
    printf("\nEnter the second number:");
    scanf("%d",&b);
    printf("\nbefore swapping:");
    printf("\n%d\n%d",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("\nAfter swapping:");
    printf("\n%d\n%d",a,b);
}