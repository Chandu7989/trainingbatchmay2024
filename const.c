// C Program to change the value of constant variable
#include <stdio.h>

int main()
{

	// defining an integer constant
	const int var = 10;

	printf("Initial Value of Constant: %d\n", var);

	// defining a pointer to that const variable
	int* ptr = &var;
	// changing value
	*ptr = 500;
	printf("Final Value of Constant: %d", var);
	return 0;
}

