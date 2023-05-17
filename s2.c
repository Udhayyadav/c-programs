#include<stdio.h>
#include<math.h>

struct add
{
 int x;
 int y;
};
void printfsum(struct add v1,struct add v2,struct add sum);
int main()
{
  struct add v1={5,3};
  struct add v2={10,7};
  struct  add sum={0};
  printfsum(v1,v2, sum);
  return 0;

}
void printfsum(struct add v1,struct add v2,struct add sum)
{
 sum.x=v1.x+v2.x;
 sum.y=v1.y+v2.y;
 printf("sum od x=%d\n",sum.x);
 printf("sum of y=%d\n",sum.y);
}
