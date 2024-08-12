/*
 ============================================================================
 Name        : Question2-2.c
 Author      : Sara Saad
 Version     :
 Copyright   : Your copyright notice
 Description : c programm to check Vowel or Consonant
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char Character=0;
	printf("Enter an Alphabet : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&Character);

	if(Character=='O' || Character=='I' || Character =='E' || Character == 'U' || Character == 'A'
	 ||Character=='o' || Character=='i' || Character =='e' || Character == 'u' || Character == 'a')
	{
		printf("%c is a Vowel",Character);
	}
	else
	{
		printf("%c is a Consonant",Character);
	}
	return 0;
}
