#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	printf("ENTER A STRING:");
	gets(a);
	for(int i=strlen(a)-1;i>=0;i--)
	{
		printf("%c",a[i]);
	}
	return 0;
}
