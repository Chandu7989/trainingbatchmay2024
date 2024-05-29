




/* Program to common elements in 2 given arrays in c
 * Author name:- Jammula Chandrahas
 * DOC:- 27-05-2024
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int i,j;
	int n;
	int result=0;
	int sum=0;
	int flag=0;
	int hash[1000]={0};
	printf("enter array size: \n");
	scanf("%d",&n);
	int arr[n];
	int arr1[n];
	
	printf("enter array elements of first array: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter array elements of second array: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<n;i++)
	{
		hash[arr[i]]++;
	}
	for(i=0;i<n;i++)
	{
		if(hash[arr1[i]]>0)
		{
			printf("%d\t",arr1[i]);
		}
	}
		

	printf("\n");
	return 0;
}
