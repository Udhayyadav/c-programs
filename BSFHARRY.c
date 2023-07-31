#include<stdio.h>
#include<conio.h>
#define max 5

int a[max][max];
int visited[max]={0,0,0,0,0};
int queue[max],f=-1,r=-1;

int isempty()
{
    if(f==-1)
    return 1;
    else
    return 0;
}

void enqueue(int x)
{
    if(isempty())
    {
        f=r=0;
    }
    else
    r++;
    queue[r]=x;
}

int del()
{
    int k;
    k=f;
    if(f==r)
    f=r=-1;
    else
    f++;
    return queue[k];
}


int main()
{
int a[max][max];
// = {
//                 {0,1,0,1,1},
//                 {1,1,1,0,0},
//                 {0,1,0,1,0},
//                 {1,0,1,0,1},
//                 {1,0,0,1,0}
//                 };


    for(int i=0;i<max;i++)
    {
        printf("for %d node:\n",i);
        for(int j=0;j<max;j++)
        {
            printf("if there is a connection b/w %d and %d \nif yes enter 1 else enter 0\n=",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    int s=1;
    printf("%d->",s);
    visited[s]=1;
    enqueue(s);
    //BFS 
    while(!isempty())
    {
        int node=del();
        for(int j=0;j<max;j++)
        {
            if(a[node][j]!=0 && visited[j]==0)
            {
                visited[j]=1;
                printf("%d->",j);
                enqueue(j);
            }
        }
    }

    return 0;

}