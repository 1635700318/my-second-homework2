#include<stdio.h>
#include<math.h>
int main()
{
int letter=0,space=0,digit=0,other=0;
 char c;
 printf("����һ���ַ���\n");
while((c=getchar())!='\n')
{ 
	if(c>='a'&&c<='z'||c>='A'&&c<='Z')
		letter++;
	else if(c==' ')
		space++;
	else if(c>='0'&&c<='9')
		digit++;
	else
		other++;
}
printf("Ӣ����ĸ������%d\n�ո������%d\n���ָ�����%d\n������%d\n",letter,space,digit,other);
return 0;
}
