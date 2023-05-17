#include<stdio.h>
int main()
{
    int a[20],n,count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        if(a[i]>=a[i+1])
        count++;
    }
    printf("%d",count);
    
}