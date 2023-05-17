//queue using linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
}*front,*rear;
void insert()
{
    int d;
    struct node *nn;
    printf("enetr number to insert");
    scanf("%d",&d);
    nn=(struct node*) malloc(sizeof(struct node*));
    nn->data=d;
    nn->link=NULL;
    if(front==NULL)
    {
        front=nn;
        rear=nn;
    }
    else
    {
    rear->link=nn;
    rear=nn;
    }
}

void deletion()
{
    struct node *temp;
    if(front==NULL)
    {
        printf("list is empty\n");
        return;
    }
    temp=front;
    if(front==rear)
    {
        front=NULL;
        rear=NULL;
    }
    else
    {
    front=front->link;
    printf("%d is deleted from list\n",temp->data);
    free(temp);
    }
}
void display()
{
    struct node *temp;
    if(front==NULL)
    { 
        printf("list is empty");
        return;
    }
    temp=front;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->link;
    }
}
int main()
{
    int choice;
    while(1)
    {
        printf("enter 1 to insert\nto delete\n3)to display\n");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1 :
                     insert();
                     break;
            case 2 :
                     deletion();
                     break;
            case 3 :
                    display();
                    break;
            case 9 :
                    printf("end of program\n");
                    return 0;
            default :
                     printf("wrong option\n");
                     break;
        }
    }

}