/*
 ============================================================================
 Name        : Question2.c
 Author      : Sara Saad
 Version     :
 Copyright   : Your copyright notice
 Description : Write C Program to Print a Integer Entered by a User
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	signed int User_Entered_Value=0;
	printf("###Console_Ouput##########\n");
	printf("Enter an Integer : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%i",&User_Entered_Value);

	printf("You entered : %i\n",User_Entered_Value);
	printf("#################################\n");
	return 0;
}
