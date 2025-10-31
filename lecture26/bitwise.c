#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("\n%d",&n);
    if(n&1){
        printf("\nodd");
    }
    else
    printf("\neven");
}