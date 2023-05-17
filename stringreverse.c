#include <stdio.h>
#include <stdlib.h>

int main()
{
int a[100],b[100];
int n,k=1;
printf("printf enter n");
scanf("%d",&n);
printf("enter elements");
for(int i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(int j=n;j>=1;j--)
{
    b[k]=a[j];
    printf("%d",b[k]);
    k++;
}
//for(int j=1;j<=n;j++)
//{
//printf("%d",b[j]);
//}
    return 0;
}