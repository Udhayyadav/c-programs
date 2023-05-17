#include<stdio.h>
#include<stdlib.h>
struct volume
{
    int len;
    int wid;
    int heg;
};
int main()
{
int i,n;
struct volume s[i];
printf("no of boxes");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
    scanf("%d %d %d",&s[i].len,&s[i].wid,&s[i].heg);
}
for(int i=1;i<=n;i++)
{
    if(s[i].heg>0 && s[i].heg<42)
    printf("%d",s[i].len*s[i].wid*s[i].heg);
}
return 0;
}