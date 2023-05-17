#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
 FILE *fp;
 char a[100];
 fp=fopen("p6.txt","r");
 fscanf(fp,"%s",&a);
 printf("%s",a);
return 0;
}