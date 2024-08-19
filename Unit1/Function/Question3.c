/*
 ============================================================================
 Name        : Question3.c
 Author      : Sara Saad
 Version     :
 Copyright   : Your copyright notice
 Description : c program to Reverse an Sentence using Recursion
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "string.h"

void Revers_String(char String1[],unsigned int Size);
int main(void)
{
	char String[1000];
	unsigned int Lenght=0;

	printf("Enter the String : ");
	fflush(stdin);
	fflush(stdout);
	gets(String);

	Lenght=strlen(String)-1;
	char Rev_String[Lenght];

	Revers_String(String,Lenght);
	printf("%s\n",Rev_String);
	return 0;
}
void Revers_String(char String1[],unsigned int Size) //5 4 3 2 1
{
	printf("%c",String1[Size]);
	Size--;
	if(Size >=0)
	Revers_String(String1,Size);
	else
	{
		exit(1);
	}
}
