

/*Grade according to score
 * Author Name:- Jammula Chandrahas;
 * DOC:- 23-05-2024
 */
#include<stdio.h>
int main()
{
	int score;
	printf("Enter score:- \n");
	scanf("%d",&score);
	if(score >= 90 && score <= 100)
	{
		printf("A\n");
	}
	if(score >= 80 && score <= 89)
	{
		printf("B\n");
	}
	if(score >= 70 && score <= 79)
	{
		printf("C\n");
	}
	if(score >= 60 && score <= 69)
	{
		printf("D\n");
	}
	else if (score < 60)
	{
		printf("F\n");
	}
	else if (score>100 && score<0)
	{
		printf("score is out of range \n");
	}
	return 0;
}
