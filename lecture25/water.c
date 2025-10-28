#include<stdio.h>
int main(){
    int letmax{6};
    int height{6}={4,2,0,3,2,5};
    int rightmax{6};
    int water=0;
    letmax{0}=height{0};
    for(int i=1;i<6;i++){
        if(height[i]>letmax[i-1]){
            letmax[i]=height[i];

        }else{
            letmax[i]=letmax[i-1];

        }
    }
    rightmax[5]=height[5];
    for(int i=3;i>=0;i--){
        if(height[i]>rightmax[i+1]){
            rightmax[i]=height[i];

        }else{
            rightmax[i]
            
        }
    }
}