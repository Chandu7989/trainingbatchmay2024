

/*Largest of three numbers
 * Author Name:- Jammula Chandrahas;
 * DOC:- 23-05-2024
 */
#include<stdio.h>
int main()
{
	double number1;
	double number2;
	double number3;
	printf("Enter number1:- \n");
	scanf("%lf",&number1);
	printf("Enter number2:- \n");
	scanf("%lf",&number2);
	printf("Enter number3:- \n");
	scanf("%lf",&number3);
	if(number1 >= number2 && number1 >= number3)
	{
		printf("%.2f is largest\n",number1);
	}
	else if(number2 >= number3 && number2 >= number1)
	{
		printf("%.2f is largest\n",number2);
	}
	else
	{
		printf("%.2f is largest\n",number3);
	}
	return 0;
}
