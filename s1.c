#include <stdio.h>
#include<string.h>


int main() {
   char a[20] = "udhay";
   char b[20] = "yadav";
   char *p1 = a;
   char *p2 = b;
   strcat(p1, p2);
   printf("Concatenated String: %s", p1);

   return 0;
}