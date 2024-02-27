#include<stdio.h>
int main()
{
	int i,j,t,position,n,array[100];
	printf("enter the no. of elements:");
	scanf("%d",&n);
	printf("enter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n-1;i++)
	{
		position=i;
		for(j=i+1;j<n;j++)
		{
			if(array[position]>array[j])
			{
				position=j;
			}
		}
		if(position!=i)
		{
			t=array[i];
			array[i]=array[position];
			array[position]=t;
		}
	}
	printf("sorted array is:");
	for(i=0;i<n;i++)
	{
		printf("%4d",array[i]);
	}
	return 0;
}
