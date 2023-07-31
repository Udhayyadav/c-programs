//LINEAR PROBING WITHOUT CHAINING
#include<stdio.h>
#include<conio.h>
#define max 5
int hash[100];

void display()
{
    int count=0;
    for(int i=0;i<max;i++)
    {
        if(hash[i]==-1)
        count++;
        else
        printf("%d->",hash[i]);
    }
    if(count==max)
     printf("hash is empty");
    else if(count==0)
     printf("hash is full");
    else
     printf("More elements can be inserted");
}

void linear(int key,int num)
{
    int idx,i;
    for(i=0;i<max;i++)
    {
        idx=(key+i)%max;
        if(hash[idx]==-1)
        {
            hash[idx]=num;
            break;
        }
    }
    if(i==max)
    printf("hash is max\n");

}

int main()
{
    int key,num;
    for(int i=0;i<max;i++)
     hash[i]=-1;
    do{
        printf("enter num or -1 to end");
        scanf("%d",&num);
        key=num%max;
        linear(key,num);
    }while(num!=-1);
    printf("elements are\n");
    display();
}