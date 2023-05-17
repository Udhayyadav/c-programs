//3.Write a program  to find largest element using calloc()
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
 int n,*fp,max;
 printf("enter no of array elements");
 scanf("%d",&n);
 fp=(int*)malloc(n*sizeof(int));
 printf("enter array elemnts");
 for(int i=0;i<n;i++)
 {
  scanf("%d",(fp+i));
 }
 max=*fp;
 for(int i=0;i<n;i++)
 {
   if(*(fp+i)>max) 
    max=*(fp+i);
 }
 printf("max=%d",max);
 return 0;
}