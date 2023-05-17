#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 
struct node {
    int data;
    struct node *rlink;
    struct node *llink;
}*front,*rear;

void push() {
    int d;
    struct node *nn;
    nn = (struct node*) malloc(sizeof(struct node));
    printf("enter data to push from front\n ");
    scanf("%d",&d);
    nn->data = d;
    nn->llink = NULL;
    nn->rlink = NULL;
    if(front == NULL) {
        front = nn;
        rear = nn;
    }
    else {
        nn->rlink = front;
        front->llink = nn;
        front = nn;
    }
}

void inject() {
    int d;
    struct node *nn;
    nn = (struct node*) malloc(sizeof(struct node));
    printf("enter data to push from rear\n ");
    scanf("%d",&d);
    nn->data = d;
    nn->llink = NULL;
    nn->rlink = NULL;
    if(front == NULL) {
        front = nn;
        rear = nn;
    }
    else {
        nn->llink = rear;
        rear->rlink = nn;
        rear = nn;
    }
}

void pop() {
    struct node* t;
    if (front == NULL) {
        printf("DQ is empty\n");
        return;
    }
    t = front;
    if (front == rear) {
        front = NULL;
        rear = NULL;
    } else {
        front = front->rlink;
        front->llink = NULL;
    }
    printf("%d is popped from front end\n", t->data);
    free(t);
}

void eject() {
    struct node* t;
    if (front == NULL) {
        printf("DQ is empty\n");
        return;
    }
    t = rear;
    if (front == rear) {
        front = NULL;
        rear = NULL;
    } else {
        rear = rear->llink;
        rear->rlink = NULL;
    }
    printf("%d is ejected from rear end\n", t->data);
    free(t);
}

void display() {
    struct node *temp;
    if(front == NULL) {
        printf("DQ is empty\n");
        return;
    }
    temp = front;
    while(temp != NULL) {
        printf("%d->",temp->data);
        temp = temp->rlink;
    }
    printf("\n");
}
 
int main(int argc, char const *argv[]) {
    int choice;
    choice=atoi(argv[1]);
    do {
        printf("enter\n1)push front element\n2)inject rare element\n3)Pop front element\n 4)eject rare element\n5)display elements\n6. Exit\nChoice ");
        scanf("%d",&choice);
        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                inject();
                break;
            case 3:
                pop();
                break;
            case 4:
                eject();
                break;
            case 5:
                display();
                break;
            case 6:
                printf("end of program\n");
                return 0;
            default:
                printf("invalid option\n");
                break;
        }
    } while (choice!=6);
    return 0;
}
