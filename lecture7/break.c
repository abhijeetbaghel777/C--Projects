#include<stdio.h>
int main(){
    int i,num;
    num=10;
    for(i=0;i<num;i++){
        if(num%i==0){
            printf("\n%d",i);
            break;
        }
    }
}