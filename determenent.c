#include<stdio.h>
#include<math.h>
int main(){
int a[20][20];
int s=0,i,j,k,g;
for(int i=1;i<=3;i++)
{
    for(int j=1;j<=3;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
for(int i=1;i<=3;i++)
{
    for(int j=1;j<=3;j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
j=1;
k=2;
for(int i=0;i<=0;i++)
{
g=pow(-1,i);
if(i==2)
{
k=1;
}
s=s+a[0][i]*(a[1][j]*a[2][k]-a[2][j]*a[1][k])*g;
j=0;
}
printf("%d",s);
return 0;
}
