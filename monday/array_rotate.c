



/* Program to rotate elements in c
 * Author name:- Jammula Chandrahas
 * DOC:- 27-05-2024
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int i,j;
	int n,k;
	int result=0;
	int sum=0;
	int flag=0;
	printf("enter array size: \n");
	scanf("%d",&n);
	int arr[n];
	int arr1[n];
	printf("number of rotations: \n");
	scanf("%d",&k);
	printf("enter array elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		arr1[i]=arr[(k+i)%(n)];
		printf("%d\t",arr1[i]);
	}
		

	printf("\n");
	return 0;
}
