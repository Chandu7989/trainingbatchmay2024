



/* Program to merge 2 arrays in c
 * Author name:- Jammula Chandrahas
 * DOC:- 27-05-2024
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int i,j;
	int n;;
	printf("enter array size: \n");
	scanf("%d",&n);
	int len = n+n;
	int temp = 0;
	int arr[n];
	int arr1[n];
	int arr2[len];
	printf("enter array elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter array1 elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	for (i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
			{
				if(arr[i]>arr[j])
				{
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
	}

	for (i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
			{
				if(arr1[i]>arr1[j])
				{
					temp=arr1[i];
					arr1[i]=arr1[j];
					arr1[j]=temp;
				}
			}
	}

	for(i=0;i<n;i++)
	{
		arr2[i]=arr[i];
	}
	for(i=0;i<n;i++)
	{
		arr2[n+i]=arr1[i];
	}
	
	
	for (i=0;i<len;i++)
	{
		for(j=i+1;j<len-i-1;j++)
			{
				if(arr2[j]>arr2[j+1])
				{
					temp=arr2[j];
					arr2[j]=arr2[j+1];
					arr2[j+1]=temp;
				}
			}
	}

	for(int i=0;i<len;i++)
		printf("%d\t", arr2[i]);

	printf("\n");
	return 0;
}
