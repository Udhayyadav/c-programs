#include<stdio.h>
#include<stdlib.h>
void display();
void count();
struct node
{
    int data;
    struct node *link;
}*first,*last;
int main()
{
    int d;
    struct node *nn;
    while(1)
    {
        printf("enter data and -1 to stop");
        scanf("%d",&d);
        if(d==-1)
        break;
        else
        {
        nn=(struct node*) malloc(sizeof(struct node*));
        nn->data=d;
        nn->link=NULL;
        if(first==NULL)
        {
            first=nn;
            last=nn;
        }
        else
        {
        last->link=nn;
        last=nn;
        }
        }
    }
    display(first);
    count(first);
    return 0;
}
void display(struct node *first)
{
  struct node *temp;
  if(first==NULL)
  {
    printf("list is empty\n");
    return ;
  }  
  temp=first;
  while(temp!=NULL)
  {
    printf("%d\t",temp->data);
    temp=temp->link;
  }
}
void count(struct node *first)
{
    int countt;
    struct node *temp;
    if(first==NULL)
    {
        printf("no element\n");
        return ;
    }
    temp=first;
    while(temp!=NULL)
    {
        countt++;
        temp=temp->link;
    }
    printf("%d is count\n",countt);
}