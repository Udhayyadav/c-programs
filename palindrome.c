#include<stdio.h>
int main()
{
 long int i,a,rev,p,n;
 printf("enter a number\n");
 scanf("%ld",&a);
for(i=a;i<=9999;i++)
 {
   rev=0; 
   n=i;
   while(n!=0)
 {
    p=n%10;
    rev=rev*10+p;
    n=n/10;
 }  
   if(i==rev)
   {
    printf("%ld\n",i);
   }
}
return 0;
}