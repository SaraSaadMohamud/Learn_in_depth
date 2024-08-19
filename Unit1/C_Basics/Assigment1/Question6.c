/*
 ============================================================================
 Name        : Question6.c
 Author      : Sara Saad
 Version     :
 Copyright   : Your copyright notice
 Description : Write Source Code to Swap Two Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float Num1=0;
	float Num2=0;
	float Temp=0;

	printf("Enter Value of a: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&Num1);

	printf("Enter Value of b: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&Num2);

	Temp=Num1;
	Num1=Num2;
	Num2=Temp;

	printf("After Swaping, value of a = %f\n",Num1);
	printf("After Swaping, Value of Num2 = %f\n",Num2);
	return 0;
}
