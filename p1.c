//2.Find the maximum difference in an array using pointers.
//a)By using pointer variable. 
//b)By using array name itself.

#include<stdio.h>
#include<stdlib.h>
int main()
{
 int *p,i,max=0,min=0,n;
 int a[100];
 printf("enter no of array elements=\n");
 scanf("%d",&n);
 p=(int *) malloc(n * sizeof(int));
 
   if(p==NULL){
    printf("no memory allocation");
    return -1; 
   }
 
 printf("enter array elements=");
 for(i=0;i<n;i++)
 {
 scanf("%d",p+i);
 }
 max=*p;
 for(i=0;i<n;i++)
 {
   if(*(p+i)>max)
    max=*(p+i); 
 }
 printf("max=%d\n",max);
 min=*p;
 for(i=0;i<n;i++)
 {
    if(*(p+i)<min)
    min=*(p+i);
 }
 printf("min=%d",min);
printf("maximum difference=%d",max-min);
 return 0;
 
}
