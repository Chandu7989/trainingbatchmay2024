/*Area and Circumference of circle
 * Author Name:- Jammula Chandrahas
 * DOC:- 23-05-2024
 */
#include<stdio.h>
#define PI 3.14

int main()
{
	float radius;
	float area;
	float circumference;
	printf("Enter radius:- \n");
	scanf("%f",&radius);
	area = PI * radius * radius;
	circumference = 2 * PI * radius;
	printf("area is: %f\ncircumference is: %f\n",area,circumference);
	return 0;
}
