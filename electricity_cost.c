#include<stdio.h>
int main()
{
	int units,cost;
	printf("enter a number:");
	scanf("%d",&units);
	if(units<=50)
	{
		cost=units*3;
	}
	else if(units<=100&&units>50)
	{
		cost=units*5;
	}
	else if(units<=200&&units>100)
	{
		cost=units*7;
	}
	else
	{
		cost=units*12;
	}
	printf("cost is %d",cost);
	return 0;
}
