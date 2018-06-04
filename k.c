#include<stdio.h>
int main()
{
  float s3=0,k;
  int s1=0,s2=0;

    for(k=1;k<=100;k++)
	{ 
      s1=s1+k;
	 }
	for(k=1;k<=50;k++)
	{  
	   s2=s2+k*k;
	}
	for(k=1;k<=10;k++)
	{  
	   s3=1/k+s3;
	}
 printf("%d\n%d\n%15.6f\n%15.6f\n",s1,s2,s3,s1+s2+s3);
 return 0;
}
