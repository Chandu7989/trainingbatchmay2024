
/* Program to find duplicate characters in c
 * Author name:- Jammula Chandrahas
 * DOC:- 27-05-2024
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int count=0;
	char str[100];
	int i,j;
	printf("enter string: \n");
	scanf("%[^\n]*c\n",str);
	printf("duplicate characters in given string are: \n");

	for (int i=0;i<strlen(str);i++)
	{
		count=1;
		for(int j=i+1;j<=strlen(str);j++)
		{
			if(str[i]==str[j] && str[i] != ' ')
			{
				count++;
				str[j]='0';
			}
		}
		if(count > 1 && str[i] != '0')
		{
			printf("%c\n",str[i]);
		}
		
	}
	printf("\n");
	return 0;
}
