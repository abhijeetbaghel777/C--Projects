#include<stdio.h>
int power(int num,int a){
    if(a==0){
        return 1;
    }
    return num*power(num,a-1);
}
int main()
{
    int num,p,data;
    data=0;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("\nEnter the power:");
    scanf("%d",&p);
    if(num==1|| p==0){
        data=1;
        printf("\nAnswer=%d",data);

    }
    else{
        data=power(num,p);
        printf("Answer=%d",data);
    }
}