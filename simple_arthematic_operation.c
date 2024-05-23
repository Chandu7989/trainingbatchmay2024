/*simple Arthematic Operation
 * Author name:- Jammula Chandrahas
 * DOC:- 23-05-2024
 * */
#include<stdio.h>
int main()
{
	int num1;
	int num2;
	int result;
	char symbol;
	printf("Enter num1:- \n");
	scanf("%d",&num1);
	printf("Enter num2:- \n");
	scanf("%d",&num2);
	printf("Enter symbol:- \n");
	scanf(" %c",&symbol);
	if(symbol == '+')
	{
		result = num1+num2;
		printf("result:- %d \n",result);
	}
	else if(symbol == '-')
	{
		result = num1-num2;
		printf("result:- %d \n",result);
	}
	else if(symbol == '*')
	{
		result = num1*num2;
		printf("result:- %d \n",result);
	}
	else if(symbol == '/')
	{
		result = num1/num2;
		printf("result:- %d \n",result);
	}
	else if(symbol == '%')
	{
		result = num1%num2;
		printf("result:- %d \n",result);
	}
	else
	{
		printf("Different symbol \n");
	}
	return 0;
}
	
