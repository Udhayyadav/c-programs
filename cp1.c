#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
 int i,s=0,avg=0,count=0;
for(i=0;i<argc;i++)
{
    s+=atoi(argv[i]);
    count++;
}
printf("sum=%d\n",s);
printf("avg=%d",(s/count));
return 0;
}