#include<stdio.h>
int main(){
    int n,a,b,next;
    a=0;
    b=1;
    next;
    printf("Enter the range:");
    scanf("%d",&n);
    int i=0;
    while(i<n){
        printf("\t%d",a);
        next=a+b;
        a=b;
        b=next;
        i++;
    }
    return 0;

}