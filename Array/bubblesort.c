/*Bubble sort*/

#include<stdio.h>
int main()
{
	int arr[100],i,j,temp,n,xchanges;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("Enter element %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Array is:");
	for(i=0;i<n;i++)
	{
       printf("%d\t",arr[i]);
	}
	printf("\n");
	for(i=0; i<n-1 ;i++)
	{
		xchanges = 0;
		for(j=0; j<n-1-i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				xchanges++;
			}
		}
		if(xchanges==0)
			break;
	}
	printf("Sorted list is :\n");
	for(i=0; i<n; i++)
		printf("%d\t",arr[i]);
	printf("\n");
	return 0;
}