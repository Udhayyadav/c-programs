#include<stdio.h>
#include<conio.H>
int main()
{
    int a[20];
    int N,p=0,q=0,flag=0;
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    scanf("%d",&a[i]);
    for(int i=1;i<=N;i++)
    {
        p=a[i];
        q=a[p];
        if(a[q]==i)
        {
            flag=1;
            break;
        }
        
    }
    if(flag==1)
    printf("YES");
    else
    printf("NO")
    return 0;
}