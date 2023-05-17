#include<stdio.h>
void fact(int n);
int main()
{
 void fact(int);
 int n,F;
 printf("enetr number");
 scanf("%d",&n);
 fact(n);
 return 0;
}
void fact(int n)
{
 int f=1,i;
  {
  for(i=1;i<=n;i++)
  f=f *i;
}
  printf("factorial=%d",f);
}
