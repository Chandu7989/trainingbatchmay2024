/*Program4 for checking armstrong number
 * Author Name:- Jammula Chandrahas;
 * DOC:- 25-05-2024
 */
#include<stdio.h>
#include<math.h>
int main()
{
	int number;
	int arr[7];
	int i,j,k;
	printf("enter array size:\n");
	scanf("%d",&number);
	printf("Enter array \n");
	for(int i =0; i<number;i++)
	{
	    scanf("%d",&arr[i]);
	}

	for(i=0;i<number;i++)
	{
	    for(j=i+1;j<number;j++)
	    {
	        if(arr[i]==arr[j])
	        {
	            for(k=j;k<number;k++)
	            {
	                arr[k]=arr[k+1];
	            }
	            j--;
	            number--;
	        }
	    }
	}
	printf("array after deleting duplicate elements are\n");
	for(i=0;i<number;i++)
	{
	    printf("%d\t",arr[i]);
	}
	printf("\n");
	return 0;
}
