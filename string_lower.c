#include<stdio.h>
int main()
{
	char str[20];
	printf("enter a string:");
	gets(str);
	touppercase(str);
	printf("upper case is %s",str);
	return 0;
}
void touppercase(char *str)
{
	while(*str!='\0')
	{
		if(*str>='A'&&*str<='Z')
		{
			*str=*str+32;
		}
		str++;
	}
}
