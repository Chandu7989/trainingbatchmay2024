

/*Program2 for checking nearest squreroot number
 * Author Name:- Jammula Chandrahas;
 * DOC:- 25-05-2024
 */
#include<stdio.h>
#include<math.h>
int main()
{
	int number;
	int i;
	printf("Enter a number: ");
	scanf("%d",&number);

	int floorSq = sqrt(number);
	int ceilSq = floorSq + 1;
	floorSq = floorSq*floorSq;
	ceilSq = ceilSq*ceilSq;

	if(number-floorSq < ceilSq-number){
		printf("%d\n",floorSq);
	}
	else{
		printf("%d\n",ceilSq);
	}

	printf("\n");
	return 0;
}
