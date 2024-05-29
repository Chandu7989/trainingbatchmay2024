


/* Program to find palindrome in c
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
	int result=0;
	int sum=0;
	int flag=0;
	char str[100];
	printf("enter string: \n");
	scanf("%[^\n]*c",str);
	int len= strlen(str);
	char temp[100];
	for(i=len-1;i>=0;i--)
	{
		temp[len-1-i]= str[i];
	}
	printf("%s\n",temp);
	for(i=0;i<len;i++)
	{
		if(str[i]!=temp[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("given string is palindrome\n");
	}
	else
	{
		printf("its not a palindrome\n");
	}
		

	printf("\n");
	return 0;
}
