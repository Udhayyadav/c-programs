#include<stdio.h>
#include<conio.h>

int a[10];

void mergesort(int lb,int mid,int ub)
{
    int b[ub+1];
    int i=lb,j=mid+1,k=lb;
    while(i<=mid && j<=ub)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        else
        {
            b[k]=a[j];
            j++;
            k++;

        }
        while(i<=mid)
        {
            b[k]=a[i];
            k++;i++;
        }
        while(j<=ub)
        {
            b[k]=a[j];
            k++;j++;
        }

    }
    for(int i=1;i<ub+1;i++)
    a[i]=b[i];
}


void merge(int lb,int ub)
{
    if(lb<ub)
    {
        int mid=(lb+ub)/2;
        merge(lb,mid);
        merge(mid+1,ub);
        mergesort(lb,mid,ub);
    }
}



int main()
{
    int n;
    printf("enter no of ele:");
    scanf("%d",&n);
    printf("enter elements\n");
    for(int i=1;i<=n;i++)
    scanf("%d",&a[i]);

    merge(1,n);

    printf("sorted array is=");
    for(int i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
}