#include<stdio.h>
int main()
{
int i,j,n;
printf("no of rows");
scanf("%d",&n);
for(i=1;i<=n;i++)
 {
   for(j=n-i;j!=0;j--)
   {
   printf("* ",j);
   }
   printf("\n"); 
 }

 return 0;

}