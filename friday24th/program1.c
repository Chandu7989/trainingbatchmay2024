

/*Program1
 * Author Name:- Jammula Chandrahas;
 * DOC:- 24-05-2024
 */
#include<stdio.h>
int main()
{
	int number;
	int rem;
	int sum=0;
	printf("Enter number:- \n");
	scanf("%d",&number);
	while(number != 0)
	{
		rem=number%10;
		sum+=rem;
		number=number/10;
	}
	printf("%d\n",sum);

	return 0;
}
