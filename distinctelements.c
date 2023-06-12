#include<stdio.h>
#include<stdbool.h>

#define max 300

int main()
{
    int N;
    scanf("%d",&N);
    int a[N];
    for(int i=0;i<N;i++)
    scanf("%d",&a[i]);

    bool dnum[max]={false};

    for(int i=0;i<N;i++)
    {
       if(!dnum[a[i]])
       {
       dnum[a[i]]=true;
       printf("%d ",a[i]);
       }

    }
}