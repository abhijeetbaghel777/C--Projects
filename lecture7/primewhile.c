#include<stdio.h>
int main(){
    int num,i,count;
    count=0;
    printf("Enter the number:");
    scanf("%d",&num);
   if(num==0 || num==1)
   printf("\n Not prime");
   else{
    i=2;
    while(i<num){
        if(num%i==0){
            count++;
        }
        i++;
        break;
    }
    if(count==0)
    printf("%d is a prime number",num);
    else
    printf("%d is not a prime number",num);
   }
}