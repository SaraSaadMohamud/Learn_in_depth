/*
 ============================================================================
 Name        : Question5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Write C Program to Find ASCII Value of a Character
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char Character1=0;

	printf("###Console_Ouput##########\n");

	printf("Enter a Character : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&Character1);

	printf("Askii code of %c = %i\n",Character1,Character1);

	printf("#################################\n");
	return 0;
}
