#include <stdio.h>
int main()
{
int a[100],d,i,j,p,n,count=0,k=0;
scanf("%d",&d);
do{
  k++;
scanf("%d",&n);
for(i=0;i<=n-1;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
   for(j=0;j<n-i-1;j++)
   {
    if(a[j]<a[j+1])
    {
      count++;
     p=a[j];
     a[j]=a[j+1];
     a[j+1]=p;
    }
   }
}
    printf("%d ",count);
}while(d!=k);
 return 0;
}
