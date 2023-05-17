#include<stdio.h>
#include<stdlib.h>
int main()
{
 int a[5]={23,24,42,12,8};
 int n=5,p=0;
 int key;
printf("enter a number to delete");
scanf("%d",&key);
for(int j=0;j<n;j++)
{
   if(a[j]==key){
   printf("%d is index of no number to delete",j);
   p=j;
   }
}
for(int k=p;k<=n-1;k++)
{
    a[k]=a[k+1];
}
printf("array after deletion\n");
for(int r=0;r<n-1;r++){
  printf("%d ",a[r]);
 }
 return 0;
}