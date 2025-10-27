#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char str[]="abhijeet";
    int ln=strlen(str);
    for ( i = 0; str[i]!='\0'; i++)
    {
         int count=1;
        for(j=j+1;str[j]!='\0';j++){
            if(str[i]==str[j]){
                count++;
                str[j]='0';
            }        
        }
        printf("%c=%d\n",str[i],count);
    }
    
}