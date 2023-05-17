#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
int max=0;
for(int i=0;i<argc;i++)
  {
    if(atoi(argv[i])>max)
    {
        max=atoi(argv[i]);
    }
  }
  printf("%d is biggest of given numbers",max);
  return 0;
}