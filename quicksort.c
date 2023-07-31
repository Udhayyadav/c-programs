//quicksort

#include<stdio.h>
#include<conio.h>

int a[10];

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int lb,int ub)
{
    int pivot=a[lb];
    int i=lb+1,j=ub;
    while(i<=j)
    {
        while(a[i]<=pivot)
        i++;
        while(a[j]>pivot)
        j--;

        if(i<j)
        swap(&a[i],&a[j]);
    }

    swap(&a[lb],&a[j]);

    return j;

}



void quicksort(int lb,int ub)
{
    int partitionindex;
    if(lb<ub)
    {
        partitionindex =partition(lb,ub);
        quicksort(lb,partitionindex-1);
        quicksort(partitionindex+1,ub);
    }
}


int main()
{
    int n;
    printf("enter no of elements=");
    scanf("%d",&n);
    printf("enter elements=");
    for(int i=1;i<=n;i++)
    scanf("%d",&a[i]);

    quicksort(1,n);

    printf("elements are=\n");
    for (int j  = 1; j <=n; j++)
    {
        printf("%d ",a[j]);
    }
    

}