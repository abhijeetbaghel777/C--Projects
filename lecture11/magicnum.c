#include<stdio.h>
int digitsum(int num){
   int sum=0;
    while(num>0){
        int ldigit=num%10;
        sum+=ldigit;
    }    
return sum;
    

}
int magic_num( int dsum){
    int sum=0;
    while(dsum>0){
        int ldigit=dsum%10;
        sum+=ldigit;
    }
    if(sum==1)
    printf("Number is a magic number");
    else
    printf("Number is not a magic number");
    return 0;
}
int main(){
    int number,b;
    printf("Enter the number:");
    scanf("%d",&number);
    b=digitsum(number);
    magic_num(b);
    return 0;
    

}