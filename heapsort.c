//hepificaton
#include<stdio.h>
#include<stdlib.h>
#define max 100

int a[max];

void del(int);

void swap(int *x, int *y)
{
    int temp = *x; 
    *x = *y;
    *y = temp;
}

void maxhepify(int a[],int n,int i)
{
    int largest=i;
    int rc=(2*i)+1;
    int lc=(2*i);
    if(lc<=n && a[largest]<a[lc])
     largest=lc;
    if(rc<=n && a[largest]<a[rc])
     largest=rc;
    if(largest!=i)
    {
        swap(&a[largest],&a[i]);
        maxhepify(a,n,largest);
    }
}

void heapsort(int a[],int n)
{
    for(int i=(n/2);i>=1;i--)
    {
        maxhepify(a,n,i);
    }
    for(int i=n;i>=1;i--)
    {
        // swap(&a[i],&a[1]);
        // maxhepify(a,i-1,1);

        // int j=1;
        // swap(&a[1],&a[i]);

        del(i);


    }

}

void del(int n)
{
    int i=1,temp;
    swap(&a[1],&a[n]);
    n--;
    while(2*i<=n)
    {
        int j=2*i;
        if(j<n && a[j]<a[j+1])
          j++;
        if(a[i]>a[j])
        break;
         temp=a[i];
         a[i]=a[j];
         a[j]=temp;

         i=j;

    }
}

int main()
{
    int n;
    printf("enter number of ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    scanf("%d",&a[i]);

    heapsort(a,n);
    
    for(int i=1;i<=n;i++)
    printf("%d->",a[i]);

    return 0;
}

