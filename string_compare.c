#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20],res;
	printf("enter string 1:");
	gets(str1);
	printf("enter string 1:");
	gets(str2);
	res=strcmp(str1,str2);
	if(res==0)
	{
		printf("both are equal");
	}
	else
	{
		printf("both are not equal");
	}
	printf("\n%d",res);
	return 0;
}
