/*
 ============================================================================
 Name        : Question3.c
 Author      : Sara Saad
 Version     :
 Copyright   : Your copyright notice
 Description : Write C Program to Add Two Integers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	signed int Number1;
	signed int Number2=0;
	signed int Sum=0;

	printf("###Console_Ouput##########");
	printf("Enter two numbers :");
	fflush(stdin);
	fflush(stdout);
	scanf("%i",&Number1);

	fflush(stdin);
	fflush(stdout);
	scanf("%i",&Number2);

	Sum=Number1 +Number2 ;
	printf("Sum : %i\n",Sum);
	printf("#################################");
	return 0;
}
