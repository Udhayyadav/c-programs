#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,d,count=0;
    scanf("%d",&d);
    do{
        count++;
        scanf("%d",&n);
        if(n==1||n==6)
            printf("Yes\n");
        else
            printf("NO\n");
    }while(d!=count);
    return 0;
}