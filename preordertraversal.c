#include<stdio.h>
#include<stdlib.h>

//int idx=-1;
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
        return ;
    }
    printf("%d->",root->data);
    preorder(root->llink);
    preorder(root->rlink);
 }


int main()
{
    int a[]={1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};;
    int idx=-1;
    struct node *root=tree(a,&idx);
    preorder(root);
    //printf("%d",root->data);
    return 0;
    
}
