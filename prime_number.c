#include<stdio.h>
int main()
{
	int i,count=0,n;
	printf("enter a number:");
	scanf("%d",&n);
	i=2;
	while(i<n)
	{
		if(n%i==0)
		{
			count=1;
			break;
		}
		i++;
	}
	if(count==0)
		printf("%d is a prime number",n);
	else
		printf("%d is not a prime number",n);
	return 0;
}
