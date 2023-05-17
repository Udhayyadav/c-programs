//5.Write a program  to create a numeric file and count the total number of prime numbers in it
#include<stdio.h>
#include<conio.h>
int main()
{
 FILE *fp;
 int a[100],n1,n2,i,j,count=0;
 fp=fopen("p.txt","w");
 if(fp==NULL)
 {
    printf("error");
    return 1;
 }
 printf("enetr range n1,n2");
 scanf("%d%d",&n1,&n2);
 for(int k=n1;k<=n2;k++)
 {
   fprintf(fp,"%d ",i);
 }
 fclose(fp);
 fp=fopen("p.txt","r");
 for(i=n1;i<=n2;i++)
{
 for(j=2;j<=i;j++)
 {
    if(i%j==0)
    {
     break;
    }
 }
 if(i==j)
 count++;
}
printf("%d=prime numbers",count);
return 0;
}