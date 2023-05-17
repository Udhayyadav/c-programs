#include<stdio.h>
#include<string.h>
struct student
{
 int roll;
 float cgpa;
 char name[100];
};
int main()
{
  struct student s1;
  s1.roll=76;
  s1.cgpa=9.67;
  strcpy(s1.name,"udhay");

 printf("student name=%s\n",s1.name);
 printf("student roll=%d\n",s1.roll);
 printf("student cgpa=%f",s1.cgpa);
 return 0;
 }