


/*Program3 for checking automorphic number
 * Author Name:- Jammula Chandrahas;
 * DOC:- 24-05-2024
 */
#include<stdio.h>
#include<math.h>
int main()
{
	int number;
	int rem;
	int count=0;
	int sum=0;
	int temp;
	printf("Enter number:- \n");
	scanf("%d",&number);
	temp=number;
	sum=number*number;
	while(number != 0)
	{
		rem=number%10;
		number=number/10;
		count++;
	}
	printf("count=%d\n",count);
	int answer=fmod(sum,(pow(10,count)));
	printf("answer=%d\n",answer);
	if(answer == temp)
	{
		printf("The %d is automorphic\n",temp);
	}
	else
	{
		printf("the %d is not automorphic\n",temp);
	}

	return 0;
}
