#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *llink;
    struct node *rlink;
}*root;

struct node *create(int data)
{
    struct node *nn;
    nn=(struct node*) malloc(sizeof(struct node));
    nn->data=data;
    nn->rlink=NULL;
    nn->llink=NULL;

 return nn;
}

struct node *insert(struct node *root,int data)
{
    if(root==NULL)
    {
        root=create(data);
        return root;
    }
    else if(data <= root->data)
    {
        root->llink=insert(root->llink,data);
    }
    else
    {
        root->rlink=insert(root->rlink,data);
    }

    return root;


}

int search(struct node *root,int data)
{
    if(root==NULL)
    return 0;
    else if(root->data==data)
    return 1;
    else if(data < root->data)
    return search(root->llink,data);
    else
    return search(root->rlink,data);
}

void postorder(struct node *root)
{
    if(root==NULL)
    return ;
    postorder(root->llink);
    postorder(root->rlink);
    printf("%d->",root->data);
}


void preorder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    printf("%d->",root->data);
    preorder(root->llink);
    preorder(root->rlink);
}
int main()
{
    int d,n,p;
    // printf("enter no of elements");
    // scanf("%d",&n);
    do
    {
        printf("eneter element or -1 to end");
        scanf("%d",&d);
        root=insert(root,d);
    }while(d!=-1);
    printf("enter elemrnt to search");
    scanf("%d",&p);
    if(search(root,p)==0)
    printf("element not found");
    else
    printf("element found");

    preorder(root);

    return 0; 


}