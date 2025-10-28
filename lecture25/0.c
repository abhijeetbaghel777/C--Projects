#include<stdio.h>
int main(){
    int arr[]={5,4,0,2,0,12};
    int j=0;

    for(int i=0;i<6;i++){
        if(arr[i]!=0){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        /* code */printf("%d\n",arr[i]);
    }
    
}
