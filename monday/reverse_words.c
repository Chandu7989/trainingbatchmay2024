



/* Program to reverse words in c
 * Author name:- Jammula Chandrahas
 * DOC:- 27-05-2024
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int i,j;
	int n;
	char str[100];
	printf("enter string: \n");
	scanf("%[^\n]*c",str);
	char* token=strtok(str," ");
	char *ans[100];
	int words=0;
	while(token != NULL)
	{
		ans[words++]= token;
		token=strtok(NULL," ");
	}

	for(int i=words-1;i>=0;i--)
	{
		printf("%s ",ans[i]); 		

	}
	printf("\n");
	return 0;
}
