#include<stdio.h>
int main()
{
	int index;
	char str[20];
	printf("enter a string:");
	gets(str);
	for(index=0;str[index]!=' ';index++);
	index++;
	for(;str[index]!=' ';index++)
	{
		putchar(str[index]);
	}
	return 0;
}
