#include<stdio.h>
#include<ctype.h>
#define EOL '\n'
int main()
{
int tag,count=0;
char letter[80];
letter[count]=getchar();
while(letter[count]!=EOL)
{
    count++;
    letter[count]=getchar();
}
tag =count;
count=0;
while(count<tag)
{
    putchar(toupper(letter[count]));
    count++;
}
return 0;
}