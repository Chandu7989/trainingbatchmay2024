

/*Body Mass Index(BMI) Program
 * BMI = Weight/(Height*Height)
 * Author Name:- Jammula Chandrahas;
 * DOC:- 23-05-2024
 */
#include<stdio.h>
int main()
{
	float weight;
	float height;
	float bmi;
	printf("Enter Weight:- \n");
	scanf("%f",&weight);

	printf("Enter Height:- \n");
	scanf("%f",&height);

	bmi = weight / (height * height);

	printf("bmi is %f\n",bmi);

	if(bmi < 18.5)
	{
		printf("Underweight\n");
	}
	else if(bmi >= 18.5 && bmi <= 24.9)
	{
		printf("Normalweight\n");
	}
	if(bmi >= 25 && bmi <= 29.9)
	{
		printf("Overweight\n");
	}
	else if(bmi >= 30)
	{
		printf("Obesity\n");
	}
	return 0;
}
