#include<stdio.h>
int main()
{
    int d;
    scanf("%d",&d);
    for(int i=0;i<d;i++)
    {
        if(i==0||i==d-1){
        for(int j=0;j<d;j++)
        {
            printf("*");
        }
        printf("\n");
        }
        else {
        for(int j=0;j<d-1;j++)
        {
            if(j==((d/2)))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
        }
    }
    return 0;
}