#include<stdio.h>
int main(){
    int num,fact;
    fact=1;
    printf("Enter the number:");
    scanf("%d",&num);
    while(num>1){
        fact=fact*num;
        num--;
    }
    printf("factorial=%d",fact);
}