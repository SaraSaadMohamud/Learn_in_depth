/*
 ============================================================================
                                                         Name        : Question_7.c
 Author      : Sara Saad
 Version     :
 Copyright   : Your copyright notice
 Description : c programm to find the factorial
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	signed int Number=0;
	unsigned int Factorial=1;

	printf("Enter an integer : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%i",&Number);

	if(Number < 0)
	{
		printf("Erorr!!! Factorial of negative Number isn't exit");
	}
	else if(Number == 0)
	{
		printf("Factorial = 1");
	}
	else
	{
		unsigned int Count=1;
		for(Count=1 ; Count <= Number ; Count++)
		{
			Factorial *= Count;
		}
		printf("Factorial = %i ",Factorial);
	}
	return 0;
}
