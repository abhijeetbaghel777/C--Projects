 #include<stdio.h>
 void sum(int a)
 {
    if(a==0)
    {
        return;
    }
    sum(a-1);
    printf("\n%d",a);
 }
 int main()
 {
    int num;
    printf("ENter the number:");
    scanf("%d",&num);
    sum(num);
 }