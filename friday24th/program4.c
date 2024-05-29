



/*Program4 for checking armstrong number
 * Author Name:- Jammula Chandrahas;
 * DOC:- 24-05-2024
 */
#include<stdio.h>
#include<math.h>
int main()
{
	int number;
	int rem=0;
	int count=0;
	int sum=0;
	int temp;
	int x=0;
	int rem1=0;
	printf("Enter number:- \n");
	scanf("%d",&number);
	temp=number;
	int temp2=temp;

	while(number != 0)
	{
		rem=number%10;
		number=number/10;
		count++;
	}
	printf("count=%d\n",count);
	while(temp != 0)
	{
		rem1=temp%10;
		x=x+pow(rem1,count);
		temp=temp/10;
	}
	printf("armstrong=%d\n",x);
	if(x == temp2)
	{
		printf("The %d is armstrong\n",temp2);
	}
	else
	{
		printf("the %d is not armstrong\n",temp2);
	}

	return 0;
}
