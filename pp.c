#include <stdio.h>

int main(void) {
	// your code goes here
	int T,s=0,count,f=0,m=0,i;
	int a[100];
    scanf("%d",&T);
	while(T--)
	{
	   scanf("%d",&count);
	   while(count--)
	   {
	      f++;
      // for(int i=0;i<count;i++)
	       scanf("%d",&a[f]);
       }
	   for(int i=1;i<=f;i++)
	   {
	       m=0;
	       for(int j=1;j<=f;j++)
	       {
	           if(a[i]==a[j])
	               m++;
	       }
	       	if(m==1)
            {
	       	printf("%d\n",a[i]);
	        break;
            }
	   }
	}
	return 0;
}
