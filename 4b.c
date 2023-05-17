#include<stdio.h>
#include<math.h>
int main()
{
int n1,n2,p,q,r=0,s=0;
int rem=0,rev=0;
printf("enter numer");
scanf("%d",&n1);
p=n1*n1;
while(n1>0)
{
rem=n1%10;
rev=rev *10+rem;
n1/=10;
}
q=rev*rev;
while(p>0)
{
r=n1%10;
s=s *10+r;
p/=10;
}
if(s==q)
printf("its a adam number");
else
printf("not a adam number");
return 0;
}

