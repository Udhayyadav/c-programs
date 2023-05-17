#include<stdio.h>
#include<math.h>
int main()
{
 int i,j,n;
 printf("enetr no of rows");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
  {
    { 
    if(i<=n/2)
    {
       for(j=1;j<=i;j++)
       printf("%d ",j);  
       printf("\n");
    }
    else
    {
        for(j=1;j<=n-(i-1);j++)
        printf("%d ",j);
        printf("\n");
    }
    }
  }
  return 0;  
}

