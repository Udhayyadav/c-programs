#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,n1,n2;
int a[1000],count=0;
printf("enter n1 and n2");
scanf("%d%d",&n1,&n2);
for(i=n1;i<=n2;i++)
{
 for(j=2;j<=i;j++)
 {
    if(i%j==0)//||(i+2)%i==0)
    {
     break;
    }
 }
 if(i==j && j<n2)
 //count=count+1;
 //a[count]=i;
 printf("(%d,%d) ",i,i+2);
}
//for(int i=1;i<=count;i++)
 //printf("%d ",a[3]);
return 0;
}