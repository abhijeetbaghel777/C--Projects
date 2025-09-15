// prime number using function
#include<stdio.h>
int prime(int number){
    int i,count;
    count=0;
     
   if(number==0 || number==1)
   printf("\n Not prime");
   else{
     for(i=2;i<number/2;i++){
        if(number%i==0){
            count++;
            break;
        }
    }
    if(count==0)
    printf("%d is a prime number",number);
    else
    printf("%d is not a prime number",number);
   }

}
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    
    prime(num);
}