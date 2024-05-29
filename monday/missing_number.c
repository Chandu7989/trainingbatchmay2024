

/* Program to find missing numbers in c
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
	int missingnumber;
	printf("enter array size: \n");
	scanf("%d",&n);
	int arr[n-1];
	printf("enter array elements: \n");
	for (int i=0;i<(n-1);i++)
	{
		scanf("%d",&arr[i]);
	}
	result=(n*(n+1))/2;
	for (int i=0;i<(n-1);i++)
	{
		sum+=arr[i];
	}
	
	missingnumber = result-sum;
	printf("missing number: %d",missingnumber);
		

	printf("\n");
	return 0;
}
