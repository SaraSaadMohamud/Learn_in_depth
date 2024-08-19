/*
 ============================================================================
 Name        : Question_3.c
 Author      : Sara Saad
 Version     :
 Copyright   : Your copyright notice
 Description : c programm to fine the largest Number among three Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float Num1=0;
	float Num2=0;
	float Num3=0;

	printf("Enter three numbers :");

	fflush(stdin);
	fflush(stdout);
	scanf("%f",&Num1);

	fflush(stdin);
	fflush(stdout);
	scanf("%f",&Num2);

	fflush(stdin);
	fflush(stdout);
	scanf("%f",&Num3);

	if(Num1 > Num2)
	{
		if(Num1 >Num3)
		{
			printf("Largest number = %0.2f",Num1);
		}
		else
		{
			printf("Largest number = %0.2f",Num3);
		}
	}
	else
	{
		if( Num2 > Num3 )
		{
			printf("Largest Number = %0.2f",Num2);
		}
		else
		{
			printf("Largest number = %0.2f",Num3);
		}
	}

	return EXIT_SUCCESS;
}
