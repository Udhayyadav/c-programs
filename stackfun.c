#include<stdio.h>
#define max 5
int top=-1;
int stk[max];
void push(int x);
void pop();
int topele();
int isempt();
int isfull();
int main()
{
int choice,ele,x;
int i,ch;
//do{
    while(1){
printf("enter any option\n1)push\n2)pop\n3)topele\n4)isempt\n5)isfull\n6)display stack\n=");
scanf("%d",&choice);
switch (choice)
{
    case 1 :
            printf("enter element");
            scanf("%d",&ele);
            push(ele);
            break;

    case 2 :
            pop();
            break;

    case 3 :
            ele=topele();
            printf("top element in stack is=%d\n",ele);
            break;

    case 4 :
            ele=isempt();
            if(ele==1)
                printf("stack is empty\n");
            else
               printf("stack is not empty\n");

    case 5 :
            x=isfull();
            if(x==1)
                printf("stack is full");
            else
               printf("stack is not full");
            break;   

    case 6 :
            if(top==-1)
            printf("stack is empty\n");
            else
            {
             for(int i=top;i>=0;i--)
             printf("%d\t",stk[i]);
            }
            break;
    
    default :
             printf("error\n");
}
//printf("\nenetr 9 to continue\nenter 0 to leave\n");
//scanf("%d",&ch);
}//while(ch==9);
return 0;
}
void push(int x)
{
    if(top==max-1)
    printf("stack overflow\n");
    else
    {
    top++;
    stk[top]=x;
    printf("%d",stk[top]);
    }

}
void pop()
{
    int y;
    if(top==-1)
    printf("stack underflow\n");
    else
   {
    y=stk[top];
    top--;
    printf("element deleted is=%d\n",y);
    }
}
int topele()
{
if(top==-1)
printf("stack underflow\n");
else
return stk[top];
}
int isempt()
{
    if(top==-1)
    return 1;
    else
    return 0;
}
int isfull()
{
if(top==max-1)
return 1;
else
return 0;
}
