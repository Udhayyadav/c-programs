#include<stdio.h>
#include<stdlib.h>

int size=7,p=5;
int dsize=0;
int *ht;

int hb2(int key)
{
    return p - key%p;
}

void inti()
{
    ht=(int*) malloc(size *sizeof(int));
    for(int i=0;i<size;i++)
     ht[i]=-1;

}

int isprime(int n)
{
    if(n<=1)
    return 0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return 0;
    }

    return 1;
}

void rehash()
{
    int new_size=2*size+1;
    int *new_ht,*temp,hb1;

    while(1)
    {
        if(isprime(new_size))
        break;

        new_size++;
    }
    new_ht=(int*) malloc(new_size *sizeof(int));
    for(int i=0;i<new_size;i++)
     new_ht[i]=-1;

    for(int i=0;i<size;i++)
    {
        if(ht[i]==-1)
        {
            continue;
        }
    
            hb1=ht[i]%new_size;
            int j=1;
            while(new_ht[hb1]!=-1)
            {
                hb1=((ht[i]%size)+ j * hb2(ht[i]))%new_size ;
                j++;
            }
           new_ht[hb1]=ht[i]; 
        
    }
    p=size;
    size = new_size;
    temp=ht;
    ht=new_ht;
    free(temp);

}

void insert(int key)
{
    int hb1;
    dsize++;
    float lf= (dsize/(float)size);
    if(lf>0.7)
    {
        rehash();
    }
    else
    {
        hb1=key%size;
        int j=1;
        while(ht[hb1]!=-1)
        {
            hb1=((key%size)+ j * hb2(key))%size;
            j++;
        }

        ht[hb1]=key;

    }
}

void display()
{
    for(int i=0;i<size;i++)
    printf("%d  ",ht[i]);
}

int main()
{
    inti();
    int op,key;
    do
    {
       printf("enter 1-inser\n2-display\n0-exit");
       scanf("%d",&op);

       switch (op)
       {
       case 1:
        printf("enter key\n");
        scanf("%d",&key);
        insert(key);
        break;
       case 2:
            display();
            break;          
       default:
        break;
       }
    } while (op);
    
}