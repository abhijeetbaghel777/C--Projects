#include<stdio.h>
int fact(int a)
{
    if(a==0){
        return 1;
    }
    return a*fact(a-1);
}
int main()
{int factorial=0;
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num==0|| num==1)
    {
        factorial=1;
        printf("\nfactorial=%d",factorial);
    }
    else{
        factorial=fact(num);
        printf("\nFactorial=%d",factorial);
    }
}