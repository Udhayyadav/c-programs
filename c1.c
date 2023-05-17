#include<stdio.h>
#include<stdlib.h>
int main()
{
 int *fp,n,s=0;
 printf("enetr how many numbers to add");
 scanf("%d",&n);
 fp=(int*)malloc(n*sizeof(int));
 for(int i=0;i<n;i++)
 {
  scanf("%d",fp);
  s=s+*fp;
 }
 printf("sum=%d",s);
 return 0;
}