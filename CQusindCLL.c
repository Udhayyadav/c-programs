//CQ using CLL
#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *link; 
}*front,*rare;


void insert()
{
 int d;
 struct node *nn;
 nn=(struct node*) malloc(sizeof(struct node));
 printf("enter data to insert\n");
 scanf("%d",&d);
 nn->data=d;
 nn->link=NULL;
 if(front==NULL)
 {
    front=nn;
    rare=nn;
    rare->link=front;
 }
 else
 {
    rare->link=nn;
    rare=nn;
    rare->link=front;
 }

}

void del()
{
    struct node *temp;
    if(front==NULL)
    {
        printf("CQ is empty\n");
        return;
    }
    temp=front;
    if(front==rare)
    {
        front=NULL;
        rare=NULL;
    }
    else
    {
        front=front->link;
        rare->link=front;
    }
    printf("Deleted element is %d\n",temp->data);
    free(temp);
}

void display()
{
    struct node *temp;
    if(front==NULL)
    {
        printf("CQ is empty\n");
        return;
    }
    temp=front;
    do{
        printf("%d->",temp->data);
        temp=temp->link;
    }while(temp!=front);
}

    int main()
    {
        int choice;
        do{
            printf("enter choice\n1)insert\n2)delete\n3)display\n4)to exit");
            scanf("%d",&choice);
            switch (choice)
            {
                case 1 :
                        insert();
                        break;
                case 2 :
                        del();
                        break;
                case 3 :
                        display();
                        break;
                case 4 :
                        printf("end of program\n");
                        return 0;
                default :
                         printf("wrong option\n");
            }
        }while(choice!=4);
        return 0;
    }

    

