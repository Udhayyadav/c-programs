#include<stdio.h>
#include<string.h>
struct student
{
 int roll;
 char name[100];
 float cgpa;
};
int main()
{
 struct student s1={76,"udhay",96.7};


 printf("student name=%s\n",s1.name);
 printf("student name=%d\n",s1.roll);
 printf("student name=%f",s1.cgpa);  

}

