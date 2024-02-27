#include<stdio.h>
int main()
{
	int a,b,i,min,gcd;
	printf("enter two values:");
	scanf("%d%d",&a,&b);
	min=(a<b?a:b);
	for(i=1;i<=min;i++)
	{
		if(a%i==0&&b%i==0)
		{
			gcd=i;
		}
	}
	printf("the gcd is %d",gcd);
	return 0;
}
