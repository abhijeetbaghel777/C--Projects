#include<stdio.h>
#include<string.h>
int main(){
    int i,count;
    char str[]="abhijeet";
    int ln=strlen(str);
    count=0;
    for(i=0;i<ln;i++)
    {
       if (str[i]=='a' || str[i]=='e'|| str[i]=='i' || str[i]=='o' || str[i]=='u')
       {
        count++;
       }
       
    }
    printf("No of vowels= %d",count);
    printf("\nNo of consonant=%d",ln-count);
}