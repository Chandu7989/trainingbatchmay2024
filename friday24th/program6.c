
/*Program6 for taking out leader
 * Author Name:- Jammula Chandrahas;
 * DOC:- 25-05-2024
 */
#include<stdio.h>
#include<math.h>
int main()
{
	int number;
	int i;
	int min;
	printf("enter array size:\n");
	scanf("%d",&number);
	int arr[number];
	printf("Enter array \n");
	for(int i =0; i<number;i++)
	{
	    scanf("%d",&arr[i]);
	}
	min=arr[number-1];
	printf("%d\t",min);

	for(i=number-2;i>=0;i--)
	{
	    if(arr[i]>min)
	    {
		    printf("%d\t",arr[i]);
		    min=arr[i];
	    }
	}
	printf("\n");
	return 0;
}
