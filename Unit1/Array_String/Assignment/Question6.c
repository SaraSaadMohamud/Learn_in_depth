/*
 ============================================================================
 Name        : Question8.c
 Author      : Sara Saad
 Version     :
 Copyright   : Your copyright notice
 Description : c programm to find the frequency of character in a string
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char String[100];
	printf("Enter a string : ");
	fflush(stdin);
	fflush(stdout);
	gets(String);

	int i=0;
	int Flag=0;
	char Search_Charachter=0;

	printf("Enter a charachter to find frequency : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&Search_Charachter);

	for(i=0 ; String[i] != '\0' ; i++)
	{
		if(Search_Charachter == String[i])
		{
			Flag++;
		}
	}
	printf("Frequency of %c = %i\n",Search_Charachter,Flag);

	return 0;
}
