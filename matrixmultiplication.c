#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,m,n,p,q,k,s;
int a[100][100],b[100][100],c[100][100];
printf("enter matrix a m*n=");
scanf("%d%d",&m,&n);
printf("enter matrix a p*q=");
scanf("%d%d",&p,&q);
//printf("enetr matrix a");

if(n==p)
{
   printf("enetr matrix a");
   for(i=0;i<m;i++)
{
   for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
}
printf("enetr matrix b");
for(i=0;i<p;i++)
{
   for(j=0;j<q;j++)
    scanf("%d",&b[i][j]);
}
for(i=0;i<m;i++)
{
 for(j=0;j<q;j++)  
 {
   s=0;
   for(k=0;k<m;k++)  {  
      s=s+(a[i][k]*b[k][j]);
   }
   c[i][j]=s;;
}
}
for(i=0;i<m;i++)
{
 for(j=0;j<q;j++)  
 {
   printf("%d\t",c[i][j]);

}
 printf("\n");
}
}
return 0;
}