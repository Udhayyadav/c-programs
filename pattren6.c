#include<stdio.h>
int main()
{
int i,j,n;
printf("no of rows");
scanf("%d",&n);
for(i=1;i<=n;i++)
 {
   for(j=n;j>=i;j--)
   {
   printf("%d",j);
   }
   printf("\n");
   
 }
 return 0;

}