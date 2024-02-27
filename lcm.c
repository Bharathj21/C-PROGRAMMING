#include<stdio.h>
int main()
{
	int a,b,i,max,lcm;
	printf("enter two values:");
	scanf("%d%d",&a,&b);
	max=(a>b?a:b);
	for(i=2;i<=max;i++)
	{
		if(max%a==0&&max%b==0)
		{
			lcm=max;
		}
	}
	printf("the lcm is %d",lcm);
	return 0;
}
