#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void mult(int,int);
void sum(int,int);
int main(int argc,char *argv[])
{
int n,a,p,m,q,choice;

choice=atoi(argv[1]);
switch (choice)
{
case 1: printf("enter a,b");
        scanf("%d%d",&m,&n);
	mult(m,n);
	break;
case 2: scanf("%d%d",&q,&p);
	sum(q,p);
	break;
	}
return 0;
}

void mult(int x,int y)
{
FILE *fp;
fp=fopen("p.txt","w");
 fprintf(fp,"%d",x*y);
 fclose(fp);
 }

void sum(int x,int y)
{
FILE *fp;
fp=fopen("p.txt","w");
fprintf(fp,"%d",x+y);
fclose(fp);
 }