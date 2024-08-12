/*
 ============================================================================
 Name        : Question7.c
 Author      : Sara Saad
 Version     :
 Copyright   : Your copyright notice
 Description : Swap two Numbers without use Temp variable
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float Num1=0;
	float Num2=0;
	
	printf("Enter Number 1 : ");
	fflush(stdin);
	fflush (stdout);
	scanf("%f",&Number2);
	
	printf("Enter Number 1 : ");
		fflush(stdin);
		fflush (stdout);
		scanf("%f",&Number2);
	
	printf("Number1 = %0.2f \t Number2 = %0.2f",Number1,Number2);
	
	Number1=Number1+Number2;
	Number2=Number1-Number2;
	Number1=Number1-Number2;
	
	printf("Number1 = %0.2f \t Number2 = %0.2f",Number1,Number2);
	
	return 0;
}
