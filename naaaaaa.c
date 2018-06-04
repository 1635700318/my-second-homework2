#include<stdio.h>
int main()
{
  int n,i,a,t=0,s=0;
  printf("input a,n=");
  scanf("%d,%d",&a,&n);
  for(i=1;i<=n;i++)
  {   
	 t=t+a;
     s=s+t;
	 a=10*a;
  }
  printf("a+aa+aaa+¡­¡­+aa¡­¡­a=%d\n",s);
  return 0;
}
