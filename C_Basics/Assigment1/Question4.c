/*
 ============================================================================
 Name        : Question4.c
 Author      : Sara Saad
 Version     :
 Copyright   : Your copyright notice
 Description : Write C Program to Multiply two Floating Point Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float Number1=0;
	float Number2=0;
	float Multibly_Value=0;

	printf("###Console_Ouput##########\n");
	printf("Enter two numbers : ");

	fflush(stdout);
	scanf("%f",&Number1);

	fflush(stdin);
	fflush(stdout);
	scanf("%f",&Number2);

	Multibly_Value= (Number1*Number2);
	printf("Product : %f\n",Multibly_Value);
	printf("#################################\n");
	return 0;
}
