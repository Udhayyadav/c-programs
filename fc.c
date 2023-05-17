#include<stdio.h>
int reverse(int n)
{
   int rem=0,r=0;
   while(n!=0)
   {
    rem=n%10;
    r=r*10+rem;
    n/=10;

   }
   return r;
}
int sum(int n)
{
 int rem=0,sum=0;
    while(n!=0)
    {
    rem=n%10;
    sum=sum+rem;
    n/=10;   
    }
    return r;
}
int main(int argc,char *argv[])
{
        if (argc < 2) {
        printf("Please enter a number as an argument.\n");
            return 1;}
 FILE *fp;
 int a,p,s;
 fp=fopen("p.txt","w");
int n=*(argv[1]);
printf("enetr 1,2");
scanf("%d",&a);
switch (a)
{
case 1:
        p=reverse(n);
        fprintf(fp,"%d",n);
        break;
case 2:
        s=sum(n);
        fprintf(fp,"%d",s);
        break;
default :
        printf("invalid option");
        break;

} 
return 0;
}