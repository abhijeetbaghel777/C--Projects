#include<stdio.h>
int main()
{
    int arr[]={2,4,8,10};
    
   int xor=0;
    int axor=0;
    for(int i=2;i<=10;i=i+2)
    {
        xor=xor^i;
    }
    for(int i=0;i<4;i++){
        axor=axor^arr[i];
    }
    printf("%d",xor^axor);

}