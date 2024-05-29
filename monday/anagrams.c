
/* Program to find anagrams in c
 * Author name:- Jammula Chandrahas
 * DOC:- 27-05-2024
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int count[258] = {0};
	char str[100];
	char str2[100];
	int i,j;
	int flag=1;
	printf("enter string: \n");
	scanf("%[^\n]*c\n",str);

	printf("enter string: \n");
	scanf(" %[^\n]*c\n",str2);
	int len=strlen(str);
	int len2=strlen(str2);
	if(len != len2)
		{
			printf("Given strings are not anagrams\n");
		}


	for (int i=0;i<strlen(str);i++)
	{
		count[(unsigned char)str[i]]++;
	}
	for (int j=0;j<strlen(str2);j++)
	{
		count[(unsigned char)str2[j]]--;
	}
	
	for(int i=0;i<strlen(str);i++){
		if(count [str[i]] != 0)
		{
			printf("given strings are not anagrams\n");
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		printf("given strings are anagrams\n");
	}
		

	printf("\n");
	return 0;
}
