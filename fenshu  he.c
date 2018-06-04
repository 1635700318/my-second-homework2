#include<stdio.h>
int main()
{
   float a=2,b=1,t,s=0;
   int i;
   for(i=1;i<=20;i++)
   { s=s+a/b;
     t=a;
	 a=a+b;
	 b=t;
   }
   printf("sum=%15.12f\n",s);
   return 0;
}

