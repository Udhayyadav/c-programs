#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
  FILE *f,*f1,*f2;
  int a[100],i;
  char s[100],c[100];
  f=fopen("p.txt","w");
  if(f==NULL)
  {
    printf("error");
    return 1;
  }
  for(i=0;i<9;i++){
  scanf("%d",&a[i]);
  fprintf(f,"%d ",a[i]);
  }
  fclose(f);
  f2=fopen("evenfile.txt","w");
  f1=fopen("oddfile.txt","w");
  for(i=0;i<9;i++)
  {
    if((a[i]%2)==0)
     
      fprintf(f2,"%d ",a[i]);
      }
    else
    {
      fprintf(f1,"%d",a[i]);
    }
  }
  fclose(f1);
  fclose(f2);
  f1=fopen("oddfile.txt","r");
  if(f1==NULL)
  {
    printf("error");
    return 0;
  }  
  fgets(s,sizeof(f1),f1);
  printf("%s",s);
  fclose(f1);
  f2=fopen("evensum.txt","r");
  if(f1==NULL)
  {
    printf("error");
    return 0;
  }
  fgets(c,sizeof(f2),f2);
  printf("%c",c);
  fclose(f2);
  return 0;
}