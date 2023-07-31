#include<stdio.h>
#include<conio.h>
#define max 5

int a[max][max]=
             {  {0,1,0,1,1},
                {1,1,1,0,0},
                {0,1,0,1,0},
                {1,0,1,0,1},
                {1,0,0,1,0}
            };
int visited[max]={0};

void dfs(int x)
{
    visited[x]=1;
    printf("%d",x);
    for(int i=0;i<max;i++)
    {
        if(a[x][i]!=0 && visited[i]==0)
            dfs(i);
    }
}

int main()
{
     for(int i=0;i<max;i++)
    {
        printf("for %d node:\n",i);
        for(int j=0;j<max;j++)
        {
            printf("if there is a connection b/w %d and %d \nif yes enter 1 else enter 0\n=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    int n;
    printf("enter node to start");
    scanf("%d",&n);
    dfs(n);
}