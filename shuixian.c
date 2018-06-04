#include<stdio.h>
int main()
{
  int a,b,s,g;
  for(a=100;a<=999;a++)
  {
	b=a/100;
	s=(a-b*100)/10;
	g=a-b*100-s*10;
	if(a==b*b*b+s*s*s+g*g*g)
	printf("%d\n",a);
  }
   printf("\n");
   return 0;
  }

