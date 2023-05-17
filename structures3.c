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
 struct student ece[100];
 ece[0].roll=76;
 ece[0].cgpa=96.7;
 strcpy(ece[0].name,"udhay");

 printf("student name=%s\n",ece[0].name);
 printf("student name=%d\n",ece[0].roll);
 printf("student name=%f",ece[0].cgpa);  

}