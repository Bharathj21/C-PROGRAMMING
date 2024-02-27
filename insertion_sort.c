#include<stdio.h>
int main()
{
	int i,j,t,flag=0,n,array[100];
	printf("enter the no. of elements:");
	scanf("%d",&n);
	printf("enter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=1;i<n;i++)
	{
		t=array[i];
		for(j=i-1;j>=0;j--)
		{
			if(array[j]>t)
			{
				array[j+1]=array[j];
				flag=1;
			}
			else
				break;
		}
		if(flag)
			array[j+1]=t;
	}
	printf("sorted array is:");
	for(i=0;i<n;i++)
	{
		printf("%4d",array[i]);
	}
	return 0;
}
