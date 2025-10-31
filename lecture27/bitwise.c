// bit wise operator XOR   0^3=3
// 4^4=0
#include<stdio.h>
int main()
{
    int arr[5]={4,5,9,4,5};
    int xor=0;
    for(int i=0;i<5;i++){
        xor=xor^arr[i];
    }
    printf("%d",xor);
}