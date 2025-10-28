// creating structure
// used to create udf datatype always written out of main class
#include<stdio.h>
#include<string.h>
struct student
{
    char name[50];
    int rollno;
    int age;
    float marks;
    struct address s2;
};

struct address{
    int pincode;
}; 
int main()
{
    struct student s1;
    s1.age=19;
    strcpy(s1.name,"Abhijeet singh Baghel");
    s1.rollno=9;
    s1.marks=9.8;
    printf("name:%s",s1.name);
    printf("\nroll no:%d",s1.rollno);
    printf("\nage:%d",s1.age);
    
}

