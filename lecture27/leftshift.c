// left shift of a no is always double of og
// a=5
// leftshift
// a<<1
// a=5=101
// after shifting a=10=101=
#include<stdio.h>
int main()
{
    float a;
    printf("Enter the number:");
    scanf("%d",&a);
    
    printf("\nAfter leftshift:%f",a<<2);
    printf("\nAfter rightshift:%f",(float)a>>2);


}