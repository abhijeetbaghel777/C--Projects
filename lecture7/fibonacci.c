#include<stdio.h>
int main(){
    int n,a,b,next;
    a=0;
    b=1;
    next;
    printf("Enter the range:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("\t%d",a);
        next=a+b;
        a=b;
        b=next;
    }
    return 0;

}