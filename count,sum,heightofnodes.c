//count traversals leftcounts+rightcounts+1=total nodes
//sum traversals leftcounts+rightcounts+root->node=total sum
//height of tree

#include <stdio.h>
#include <stdlib.h>

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

int count(struct node *root)
{
    if(root==NULL)
    return 0;
    int leftcount=count(root->llink);
    int rightcount=count(root->rlink);

    return leftcount+rightcount+1;
}
int sum(struct node *root)
{
    if(root==NULL)
    return 0;
    int leftsum=sum(root->llink);
    int rightsum=sum(root->rlink);

    return leftsum+rightsum+root->data;
}

int height(struct node *root)
{
    if(root==NULL)
    return 0;
    int leftheight=height(root->llink);
    int rightheight=height(root->rlink);

    if(leftheight>rightheight)
    return leftheight+1;
    return rightheight+1;
}

int diameter(struct node *root)
{
    if(root==NULL)
    return 0;
    int dim1=diameter(root->llink);
    int dim2=diameter(root->rlink);
    int dim3=height(root->llink)+height(root->rlink)+1;

    if(dim3>dim2 && dim3>dim1)
    return dim3;
    else if(dim2>dim3 && dim2>dim1)
    return dim2;
    return dim1;
}

int main()
{
    int a[]={1,2,3,4,5,-1,-1,-1,-1,6,-1,7,-1,-1,-1};
    int idx=-1;
    struct node *root=tree(a,&idx);
   printf("count=%d",count(root));
   printf("\n");
   printf("sum=%d",sum(root));
   printf("\n");
   printf("height=%d",height(root));
   printf("\n");
   printf("diameter=%d",diameter(root));

    return 0;
    
}