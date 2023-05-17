#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *f1,*f2;
char c[100],d[100];
char ch[100];
f1=fopen("p.txt","w");
if(c!=NULL)
{
  printf("error");
}
printf("enetr string");
scanf("%s",c);
fprintf(f1,"%s",c);
fclose(f1);
f1=fopen("p.txt","r");
f2=fopen("p1.txt","w");
fscanf(f1,"%s",&d);
fprintf(f2,"%s",d);
fclose(f1);
fclose(f2);
f2=fopen("p1.txt","r");
fscanf(f2,"%s",&ch);
printf("%s",ch);
return 0;
}
