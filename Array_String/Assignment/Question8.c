/*
 ============================================================================
 Name        : Question10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : c programm to Revese the string without using any function
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "string.h"

int main(void)
{
	char String[1000];
	int i=0;
	int Lenght=0;
	char Temp=0;

	printf("Enter a string : ");
	fflush(stdin);
	fflush(stdout);
	gets(String);

	Lenght=strlen(String)-1;
	int Size=Lenght;

	for(i=0 ; i<Lenght/2 ; i++)
	{
		Temp=String[i];
		String[i]=String[Size];
		String[Size]=Temp;
		Size--;
	}

	printf("Revers String is : %s",String);
	return 0;
}
