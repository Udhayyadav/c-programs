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

    bool dsum[max]={false};

    for(int i=0;i<N;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            if(!dsum[a[i]+a[j]])
            {
                dsum[a[i]+a[j]]=true;
                printf("%d ",a[i]+a[j]);
            }
        }
    }
    return 0;
}