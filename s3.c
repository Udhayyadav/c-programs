//5.Write a program to declare a structure for complex number( which includes real, imaginary parts)
// and perform different operation like addition, subtraction, multiplication of two complex numbers using functions.
#include<stdio.h>
struct imaginary
{
  int x;
  int y;  
};
 void printfsum(struct imaginary v1,struct imaginary v2,struct imaginary sum);
 void printfsub(struct imaginary v1,struct imaginary v2,struct imaginary sub);
 void printfmul(struct imaginary v1,struct imaginary v2,struct imaginary mul);
 int main()
 {
  struct imaginary v1={5,5};
  struct imaginary v2={5,5};
  struct imaginary sum={0};
  struct imaginary sub={0};
  struct imaginary mul={0};
  printfsum(v1,v2,sum);
  printfsub(v1,v2,sub);
  printfmul(v1,v2,mul);
  return 0;

 }
 void printfsum(struct imaginary v1,struct imaginary v2,struct imaginary sum)
 {
   sum.x=v1.x+v2.x;
   sum.y=v1.y+v2.y;
   printf("sum of complex number=%d+i%d",sum.x,sum.y);
 }
 void printfsub(struct imaginary v1,struct imaginary v2,struct imaginary sub)
 {
    sub.x=v1.x-v2.x;  
    sub.y=v1.y-v2.y;
    printf("sub of complex number=%d-i%d",sub.x,sub.y);
 }
 void printfmul(struct imaginary v1,struct imaginary v2,struct imaginary mul)
 {
    mul.x=(v1.x*v2.x )- (v1.y*v2.y);
    mul.y=(v1.x*v2.y)+(v2.x*v1.y);
    printf("mul of complex number=%d+i%d",mul.x,mul.y);   
 }

