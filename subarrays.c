#include <stdio.h>
#include <math.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a[N];
    for(int i=0;i<N;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<N;i++)
    {
        for(int j=i;j<N;j++)
        {
            for(int k=i;k<=j;k++)
            {
                printf("%d ",a[k]);
            }
            printf("\n");
        }
    }
}