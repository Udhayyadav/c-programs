#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 
 struct node
 {
    int data;
    struct node *rlink;
    struct node *llink;
 }*front,*rear;

 void push()
 {
    int d;
   struct node *nn;
   nn=(struct node*) malloc(sizeof(struct node));
    printf("enter data to push from front\n");
    scanf("%d",&d);
    nn->data=d;
    nn->llink=NULL;
    nn->rlink=NULL;
    if(front==NULL)
    {
        front==nn;
        rear=nn;
    }
    else{
    nn->rlink=front;
    front->llink=nn;
    front=nn;
    }
 }

 void inject()
 {
    int d;
   struct node *nn;
   nn=(struct node*) malloc(sizeof(struct node));
    printf("enter data to push from rear\n");
    scanf("%d",&nn->data);
    nn->llink=NULL;
    nn->rlink=NULL;
    if(front==NULL)
     {
        front==nn;
        rear=nn;
      }
      else {
      nn->llink=rear;
      rear->rlink=nn;
      rear=nn;
      }
 }

 void pop()
 {
  struct node *t;
  if(front==NULL)
  {
    printf("DQUEUE IS EMPTY\n");
    return;
  }
  t=front;
  if(front==rear)
  {
    front=NULL;
    rear=NULL;
  }
  else {
  front=front->rlink;
  front->llink=NULL;
  }
  printf("%d is poped from front end\n",t->data);
  free(t);
 }

 void eject()
 {
   struct node *t;
  if(front==NULL)
  {
    printf("DQUEUE IS EMPTY\n");
    return;
  }
  t=rear;
  if(front==rear)
  {
    front=NULL;
    rear=NULL;
  }
  else {
  rear=rear->llink;
  rear->rlink=NULL;
  }
  printf("%d is eject from rear end",t->data);
  free(t);
 }

 void display()
 {
    struct node *temp;
    if(front==NULL)
    {
        printf("DQUEUE IS EMPTY\n");
        return;
    }
    temp=front;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->rlink;
    }

 }
 
 int main()
 {
    int n,choice;
    do{
    {
    printf("enter 1)fpush \n2)inject \n3)fpop \n4)eject \n 5)display \n6)exit\n=");
    scanf("%d",&choice);

    switch (choice)
    {
      case 1 :
                push();
                break;
      case 2 :
                inject();
                break;
      case 3 :
                pop();
                break;
        
      case 4 :
                eject();
                break;
        
      case 5 :
                display();
                break;
        
      case 6 :
                printf("end of program\n");
                return 0;

      default :
                printf("Invalid option\n");
                break;
       }
    }
    }while(n!=6);
    return 0;
 }
