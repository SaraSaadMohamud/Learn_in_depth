/*
 ============================================================================
 Name        : Question1_2.c
 Author      : Sara Saad
 Version     :
 Copyright   : Your copyright notice
 Description :write c programm to check whether the number is Even ot Odd
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned int Number=0;

	printf("Enter an integer you want to check :");
	fflush(stdin);
	fflush(stdout);
	scanf("%i",&Number);

	/*if(Number % 2 == 0)
	{
		printf("%i is Even",Number);
	}
	else
	{
		printf("%i is Odd",Number);
	}*/
	if(Number&1)
	{
		printf("%i is Odd",Number);
	}
	else
	{
		printf("%i is Even",Number);
	}
	return 0;
}
