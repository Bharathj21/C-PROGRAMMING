#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	printf("enter string 1:");
	gets(str1);
	printf("enter string 2:");
	gets(str2);
	strcat(str1,str2);
	printf("after concatenation:\n");
	printf("%s",str1);
	return 0;
}
