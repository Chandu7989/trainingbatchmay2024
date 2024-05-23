

/*Binary to Decimal
 * Author name:- Jammula Chandrahas
 * DOC:- 23-05-2024
 * */
#include<stdio.h>
int main()
{
        long int binary;
	int decimal = 0;
	int exponent=1;
	int rem;
	printf("Enter binary number:- \n");
	scanf("%ld",&binary);
	while(binary != 0)
	{
		rem = binary%10;
		binary = binary/10;
		decimal += exponent*rem;
		exponent *= 2;
	}
	printf("The decimal number is: %d\n",decimal);
	return 0;
}
	
