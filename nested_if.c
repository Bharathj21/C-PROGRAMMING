#include<stdio.h>
int main()
{
	int n;
	printf("enter a value:");
	scanf("%d",&n);
	if(n>=0)
	{
		if(n%2==0)
		{
			printf("the number is positive even number");
		}
		else
		{
			printf("the number is positive odd number");
		}
		
	}
	else
	{
		if(n%2==0)
		{
			printf("the number is negative even number");
		}
		else
		{
			printf("the number is negative odd number");
		}
	}
	return 0;
}	
