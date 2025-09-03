#include<stdio.h>
void main()
{
     int marks;
    scanf("%d", &marks);
    if (marks < 0 || marks > 100) {
        printf("Invalid marks\n");
        
    }
    if (marks >= 90) printf("Grade: A\n");
    else if (marks >= 75) printf("Grade: B\n");
    else if (marks >= 50) printf("Grade: C\n");
    else if (marks >= 33) printf("Grade: D\n");
    else printf("Grade: F\n");
    if (marks >= 33) printf("Pass\n");
    else printf("Fail\n");
}