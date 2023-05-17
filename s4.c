#include<stdio.h>
#include<math.h>
struct address
{
 int hno;
 int block;
 char city[100];
 char state[100];
};  
 void printfinfo(struct address add);

 int main()
 {
 struct address add[1];
 printf("enter 1st address=");
 scanf("%d",&add[0].hno);
 scanf("%d",&add[0].block); 
 scanf("%s",add[0].city);
 scanf("%s",add[0].state);

 printf("enter 2st address=");
 scanf("%d",&add[1].hno);
 scanf("%d",&add[1].block); 
 scanf("%s",add[1].city);
 scanf("%s",add[1].state);

 printfinfo(add[0]);
 printfinfo(add[1]);
 return 0;
 }

 void printfinfo(struct address add)
 {
  printf("address=%d %d %s %s\n",add.hno,add.block,add.city,add.state);
 }


