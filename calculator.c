
/*simple Arthematic Operation
 * Author name:- Jammula Chandrahas
 * DOC:- 23-05-2024
 * */
#include<stdio.h>
int main()
{
        double	num1;
	double num2;
	double result;
	char op;
	printf("Enter num1:- \n");
	scanf("%lf",&num1);
	printf("Enter num2:- \n");
	scanf("%lf",&num2);
	printf("Enter symbol:- \n");
	scanf(" %c",&op);
	switch(op)
	{
		case '+':
			result = num1+num2;
			printf("result:- %lf \n",result);
			break;

		case '-':
			result = num1-num2;
			printf("result:- %lf \n",result);
			break;

		case '*':
			result = num1*num2;
			printf("result:- %lf \n",result);
			break;

		case '/':
			result = num1/num2;
			printf("result:- %lf \n",result);
			break;

		default:
			printf("Enter valid operator \n");
	}
	return 0;
}
	
