#include<stdio.h>
#include<math.h>
int main()
{
  int i,j,n;
  printf("enetr no of rows");
  scanf("%d",&n);  
  for(i=1;i<=n;i++)
   {
    for(j=i;j!=0;j--)
      {
        if(i==1||i==n||j==1||i==j)
         printf("* ");        
         else
          printf("  ");
         
   }  
        printf("\n");
} 
}