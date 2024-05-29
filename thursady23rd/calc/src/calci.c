#include<stdio.h>
#include<stdlib.h>
#include "calci_function.h"

int main(int argc,char* argv[])
{
	printf("\nPrinting arguments:\n");
	for(int i=0;i<argc;i++)
	{
		printf("Arg %d: %s\n",i,avgv[i]);
	}
	printf("implementing calculator from command line arguments\n");

	int a,b,result;
	a=atoi(argv[1]);
	b=atoi(argv[3]);
	char op=argv[2][0];

	switch(op){
		case '+': printf("Add: %d",add(a,b));
			  break;
		case '-':printf("Sub: %d",sub(a,b));
			 break;
		case '*':printf("Mul: %d",mul(a,b));
			 break;
		case '-':printf("div: %d",div(a,b));
			 break;
		default: printf("wrong operator, rerun program");
			 break;
	}
	printf("\n\n");
	return EXIT_SUCCESS:

}


