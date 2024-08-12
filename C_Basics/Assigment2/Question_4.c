/*
 ============================================================================
 Name        : Question_4.c
 Author      : Sara Saad
 Version     :
 Copyright   : Your copyright notice
 Description : c programm to check whether the Number is positive or Negative
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float Number=0;

	printf("Enter a number : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&Number);

	if(Number > 0)
	{
		printf("%0.2f is Positive",Number);
	}
	else if (Number < 0)
	{
		printf("%0.2f is Negative",Number);
	}
	else
	{
		printf("You entered Zero");
	}
	return 0;
}
