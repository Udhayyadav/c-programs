#include<stdio.h>
int main()
{
 int rem=0,a,s=0;
 printf("enter number");
 scanf("%d",&a);

        while(a>9)
        {
          s=0;
          while(a>0)
          {
            rem=a%10;
            s+=rem;  //s=10
            a/=10;
          }
          a=s;
        }
printf("%d",a);
return 0;
}