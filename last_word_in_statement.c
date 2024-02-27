#include<stdio.h>
#include<string.h>
int main()
{
	int len;
	char str[20];
	printf("enter a string :");
	gets(str);
	len=strlen(str);
	len--;
	for(;str[len]!=' ';len--);
	len++;
	for(;str[len]!='\0';len++)
		putchar(str[len]);
	printf("\n");
	return 0;
}
