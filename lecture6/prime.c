#include<stdio.h>
int main(){
    int num,count;
    count=0;
    printf("Enter the number:");
    scanf("%d",&num);
    for(int i=2;i<num/2;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==0)
    printf("Number is prime");
    else
    printf("Number is not prime");
}