#include<stdio.h>
int main(){
    int num;
    num=15;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            continue;
            printf("%d",i);
        }
        else 
        printf("\n%d",i);
    }
}