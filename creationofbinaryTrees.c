//creation

#include<stdio.h>
#include<stdlib.h>

int count=0;
struct node
{
    int data;
    struct node *rlink;
    struct node *llink;
}*root;

struct node *create(struct node *root)
{
    int d;
   // struct node *root;
    root=(struct node*) malloc(sizeof(struct node*));
    while(count!=1)
    {
        printf("enter root node");
        count++;
    }
    scanf("%d",&d);
    if(d==-1)
    return NULL;
    root->data=d;
    printf("enter left child of %d",root->data);
    root->llink=create(root->llink);
    printf("enter right child of %d",root->data);
    root->rlink=create(root->rlink);

    return root;
}

int main()
{
    root=create(root);
    return 0;
}