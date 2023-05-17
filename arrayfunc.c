#include<stdio.h>
int arraysum(int a[],int n);
int main()
{
int p,n,sum=0;
int a[100];
printf("enter no of array elements");
scanf("%d",&p);
printf("eneter array elements");
for(int i=0;i<p;i++)
{
scanf("%d",&a[i]);
}
sum=arraysum(a,p);
printf("sum=%d",sum);
return 0;
}
int arraysum(int a[],int p)
{
    int s=0;
   for(int i=0;i<p;i++)
   {
    s=s+a[i];
 } 
return s;
}