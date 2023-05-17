#include<stdio.h>
#include<conio.h>
int main()
{
 int count=0;
 char s[100];
 scanf("%s",s);
 for(int i=0;s[i]!='\0';i++)
 {
 count++;
}
printf("%d",count);
return 0;
}