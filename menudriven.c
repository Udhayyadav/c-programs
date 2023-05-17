#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int n,a,l,p,b,s=0;
int x,y,z;
do
{
printf("area and primeter for \n1 for rectangle\n2for square\n3 for triangle\n4 for circle\nenter 9 for end");
scanf("%d",&n);
switch (n)
{
case 1:
       printf("enter leanth and breath=");
       scanf("%d%d",&l,&b);
       a=l*b;
       p=2*(l+b);
       printf("area=%d\nperimeter=%d",a,p);
       break;
case 2:
       printf("enter side=");
       scanf("%d",&l);
       a=l*l;
       p=4*l;
       printf("area=%d\nperimeter=%d",a,p);
       break;
 case 3:
       printf("enter a,b,c");
       scanf("%d%d%d",&x,&y,&z);
       p=x+y+z;
       s=(x+y+z)/2; 
       a=sqrt(s*(s-x)*(s-y)*(s-z));
       printf("area=%d\nperimeter=%d",a,p);
       break;
 case 4:
       printf("enter radius=");
       scanf("%d",&l);
       a=3.14*l*l;
       p=2*3.14*l;
       printf("area=%d\nperimeter=%d\n",a,p);
       break;
 case 9:
        printf("end\n");                       
default:
    printf("invalid option\n");
    break;
}
}
while(n!=9);
return 0;    
}