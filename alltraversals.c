#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *llink;
    struct node *rlink;

};

struct node *tree(int a[],int *idx)
{
    (*idx)++;
    if(a[*idx]==-1)
    {
        return NULL;
    }
    struct node *nn;
    nn=(struct node*) malloc(sizeof(struct node));
    nn->data=a[*idx];
    nn->llink=tree(a,idx);
    nn->rlink=tree(a,idx);


 return nn;
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

void inorder(struct node *root)
{
    if(root==NULL)
    return;
    inorder(root->llink);
    printf("%d->",root->data);
    inorder(root->rlink);
}

void postorder(struct node *root)
{
    if(root==NULL)
    return;
    inorder(root->llink);
    inorder(root->rlink);
    printf("%d->",root->data);
}

int main()
{
    int a[]={1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    int idx=-1;
    struct node *root=tree(a,&idx);
    preorder(root);
    printf("\n");
    inorder(root);
    printf("\n");
    postorder(root);
}