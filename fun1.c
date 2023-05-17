#include<stdio.h>
void printftable(int n);
int sum();
int main()
{
int n,i;
printf("eneter number");
scanf("%d",&n);

printftable(n);
return 0;
}
void printftable(int n)
{
 for(int i=1;i<=n;i++)
 printf("%d\n",i*n);
}