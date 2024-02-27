#include<stdio.h>
int main()
{
	int n,f,sum=0,r,temp;
	printf("enter n:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		f=1;
		r=n%10;
		for(int i=r;i>=1;i--)
		{
			f=f*i;
		}
		sum=sum+f;
		n=n/10;
	}
	if(sum==temp)
		printf("%d is strong number",temp);
	else
		printf("%d is not strong number",temp);
	return 0;
}
