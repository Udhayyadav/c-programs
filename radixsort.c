// You are using GCC
#include<stdio.h>
#include<math.h>

void rs(int a[],int n){
    int b[10][10],b_c[10],i;
    int max=0,div=1,rem,node=0;
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    while(max>0)
    {
        node++;
        max=max/10;
    }
    for(int pass=0;pass<node;pass++)
    {
        for(int i=0;i<10;i++)
        b_c[i]=0;
        for(int i=0;i<n;i++)
        {
            rem=(a[i]/div)%10;
            b[rem][b_c[rem]]=a[i];
            b_c[rem]++;
        }
        i=0;
        for(int j=0;j<10;j++)
        {
            for(int k=0;k<b_c[j];k++)
            {
            a[i]=b[j][k];
            i++;
            }
        }
        div*=10;
    }
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
}

int main()
{
    int a[100],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    rs(a,n);
    return 0;
}
