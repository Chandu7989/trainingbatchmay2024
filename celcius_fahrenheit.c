/*Celcius to fahrenheit
 * Author Name:- Jammula Chandrahas;
 * DOC:- 23-05-2024
 */
#include<stdio.h>
int main()
{
	float celcius;
	float fahrenheit;
	printf("Enter celcius:- \n");
	scanf("%f",&celcius);
	fahrenheit = (celcius*1.8) + 32;
	printf("fahrenheit is %f\n",fahrenheit);
	return 0;
}
