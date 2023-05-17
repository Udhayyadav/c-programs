#include<stdio.h>
#include<math.h>
float areasquare(float side);
float areacircle(float radius);
float arearectangle(float l,float b);
int main()
{
 float l=3.0;
 float b=5.0;
print("%f",arearectangle(l,b));
 return 0;
}
float areasquare(float side)
{
    return pow(side,2);
}
float areacircle(float radius)
{
    return 3.14*radius*radius;
}
float arearectangle(float l,float b)
{
    return l*b;
}
