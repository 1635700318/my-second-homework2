#include<stdio.h>
#include<math.h>
int main()
{
int letter=0,space=0,digit=0,other=0;
 char c;
 printf("输入一行字符：\n");
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
printf("英文字母个数：%d\n空格个数：%d\n数字个数：%d\n其他：%d\n",letter,space,digit,other);
return 0;
}
