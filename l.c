#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *link;
}*first,*last;
void insert()
{
struct node *nn;
int d,choice,pos,i;
nn=(struct node*) malloc(sizeof(struct node*));
printf("enter data to insert\n");
scanf("%d",&d);
if(first=NULL)
{
    first=nn;
    last=nn;
}
nn->data=d;
nn->link=NULL;
printf("1)begining\t2)end\t3)mid\n");
scanf("%d",&choice);
switch (choice)
{
    case 1:
            nn->link=first;
            first=nn;
            break;
    case 2:
            last->link=nn;
            last=nn;
            break;
    case 3:
            printf("enter position to insert\n");
            scanf("%d",&pos);
            struct node *temp;
            temp=first;
            while(i<pos-1)
            {
                temp=temp->link;
                i++;
            }
            nn->link=temp->link;
            temp->link=nn;
            break;
}
}

void display()
{
    struct node *temp;
    if(first==NULL)
    {
        printf("list is empty\n");
        return;
    }
    temp=first;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->link;
    }
}
int main()
{
int d;
while(1)
{
    printf("enter 1 to insert data\n");
    scanf("%d",&d);
    if(d==1)
    insert();
    else
    break;
}
display();

}