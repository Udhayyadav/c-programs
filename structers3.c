// pointers to structures 
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
 struct student s1={76,"name",96.7};
 struct student *ptr=&s1;
 printf("student name=%s",(*ptr).name);

return 0;
}