/*
 ============================================================================
 Name        : Question2.c
 Author      : Sara Saad
 Version     :
 Copyright   : Your copyright notice
 Description : C programm to find a factorial of Number Using Recursion
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
signed int Get_Factorial(signed int Number);
int main()
{
	signed int Number=0;
	signed int Result=Number;
	signed int Factorial=0;

	printf("Enter an positive intger : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%i",&Number);

	Factorial=Get_Factorial(Number);
	printf("Factorial of (%i) = %i\n",Result,Factorial);

	return 0;
}
signed int Get_Factorial(signed int Number)
{
	signed int Fact=1;
			if(Number ==-1)
			{
				printf("%i,is a Negative Number you can't get Factorial for !!\n",Number);
				exit(1);
			}
			else if (Number==0)
			{
				return(1);
			}
			else
			{
				Fact=Number*Get_Factorial(Number-1);
			}
			return(Fact);
}
