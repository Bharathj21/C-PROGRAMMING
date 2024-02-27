#include<stdio.h>
int main()
{
	int arr[10],i,n,key,index,flag=0;
	printf("enter no. of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter element at %d index:",i);
		scanf("%d",&arr[i]);
	}
	printf("\n\nenter key element to search:");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			flag=1;
			index=i;
		}
		
	}
	if(flag==1)
	{
		printf("%d is found at %d ",key,index);
	}
	if(flag==0)
	{
		printf("%d is not found ",key);
	}
	return 0;
}
