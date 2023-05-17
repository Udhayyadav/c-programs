//factorials a&r
#include<stdio.h>
int fact(int n);
int main()
{
 int fact(int);
 int n,F;
 printf("enetr number");
 scanf("%d",&n);
 F=fact(n);
 printf("%d",F);
 return 0;
}
int fact(int n)
{
 int f=1,i;
  {
  for(i=1;i<=n;i++)
  f=f *i;
}
  return (f);  
}

