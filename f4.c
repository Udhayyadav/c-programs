#include<stdio.h>
void swap(int x,int y);
int main()
{
int a,b;
printf("enetr a and b=");
scanf("%d%d",&a,&b);
swap(a,b);
printf("(%d,%d)",a,b);
return 0;
}
void swap(int x,int y)
{
int *p1,*p2;
p1=&x;
p2=&y;
printf("(%d,%d)",*p1,*p2);
}
