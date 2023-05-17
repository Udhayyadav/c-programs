#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct length
{
    int a;
    int b;
    int c;
};
int main()
{
    int n,p,m;
   int x[20];
    printf("enter no.of triangles");
    scanf("%d",&n);
    struct length s[n-1];
    for(int i=0;i<=n-1;i++)
    scanf("%d %d %d",s[i].a,s[i].b,s[i].c);
     for(int i=0;i<=n-1;i++)
     {
        p=((s[i].a+s[i].b+s[i].c)/3) ;
        m= p * (p-(s[i].a)) * (p-(s[i].b)) * (p-(s[i].c));
        x[i]=sqrt(m);
     }
     for(int i=0;i<=n-1;i++)
     {
        printf("%d",x[i]);
     }
     return 0;

}