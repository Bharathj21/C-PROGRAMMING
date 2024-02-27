#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[20];
	printf("enter a string:");
	gets(a);
	strcpy(b,a);
	printf("after string copy  %s",b);
	return 0;
}
