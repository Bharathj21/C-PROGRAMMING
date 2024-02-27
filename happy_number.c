#include<stdio.h>
int main()
{
	int sum,n,r;
	printf("enter a number:");
	scanf("%d",&n);
	
	while(n>=10)
	{
		sum=0;
		while(n>0)
		{
			r=n%10;
			sum=sum+(r*r);
			n=n/10;
		}
		n=sum;
	}
	if(sum==1)
		printf("%d is a happy number",sum);
	else
		printf("%d is not a happy number",sum);
	return 0;
}
