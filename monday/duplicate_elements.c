/* Program to find duplicate elements in c
 * Author name:- Jammula Chandrahas
 * DOC:- 27-05-2024
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int num;
	printf("enter the size of array: \n");
	scanf("%d",&num);
	int arr[num];
	int i,j;
	printf("array elements are: \n");
	for(int i=0;i<num;i++)
	{
		scanf("%d\t",&arr[i]);
	}
	printf("duplicate elements in given array are: \n");

	for (int i=0;i<num;i++)
	{
		for(int j=i+1;j<=num;j++)
		{
			if(arr[i]==arr[j])
			{
				printf("%d\t ",arr[j]);
			}
		}
		
		
	}
	printf("\n");
	return 0;
}
