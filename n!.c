#include<stdio.h>
int main()
{
  double n,t=1,s=0;
  for(n=1;n<=20;n++)
  { 
	t=t*n;
	s=s+t;
  }
  printf("½á¹ûÎª£º%25.15e",s);
  return 0;
}
