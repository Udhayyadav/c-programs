#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *llink;
    struct node *rlink;
}*root;

struct node *insert(struct node *root,int data)
{
    if(root==NULL)
    {
        root=(struct node *) malloc(sizeof(struct node));
        root->data=data;
        root->rlink=NULL;
        root->llink=NULL;

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

int search(struct node *root,int key)
{
    if(root==NULL)
    return 0;
    else if(key==root->data)
    return 1;
    else if(key<root->data)
    return search(root->llink,key);
    else 
    return  search(root->rlink,key);

}

void Border(struct node *root)
{
    if(root==NULL)
    return;
    Border(root->rlink);
    printf("%d->",root->data);
    Border(root->llink);
}
struct node *inOrderPredecessor(struct node *root)
{
    root=root->llink;
    while(root->rlink!=NULL)
    {
        root=root->rlink;
    }
    return root;
}
struct node *delition(struct node *root,int key)
{
    struct node *ipre;
    //case 1 leaf none
    if(root==NULL)
    return NULL;
    if(root->llink==NULL && root->rlink==NULL)
    {
        free(root);
        return NULL;
    }
     //search node to delete
    if(key<root->data)
    root->llink=delition(root->llink,key);
    else if(key>root->data)
    root->rlink=delition(root->rlink,key);
    //Deletion strategy inorder predesisor
    else{
        ipre=inOrderPredecessor(root);
        root->data=ipre->data;
        root->llink=delition(root->llink,ipre->data);

    }

    return root;
}

int main()
{
    int d,key;
    printf("enter root node\n");
    do{
    scanf("%d",&d);
    root=insert(root,d);
    }while(d!=-1);

    // printf("%d\n",root->data);
    // printf("enter key to search\n");
    // scanf("%d",&key);
    // if(search(root,key)==1)
    // printf("element  fount\n");
    // else
    // printf("elemnt not found\n");

     Border(root);
    scanf("%d",&key);
    delition(root,key);
    Border(root);


    return 0;

}