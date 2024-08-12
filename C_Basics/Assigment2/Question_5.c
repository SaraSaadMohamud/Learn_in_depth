/*
 ============================================================================
 Name        : Question_5.c
 Author      : Sara Saad
 Version     :
 Copyright   : Your copyright notice
 Description : c programm to chech wether the Number is Alphabet or Not
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char Charachter=0;

	printf("Enter a character : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&Charachter);

	if(((Charachter <91)&&(Charachter >64)) || ((Charachter < 123) && (Charachter > 96)))
		{
			printf("%c is an alphabet",Charachter);
		}
	else
	{
		printf("%c is not an alphabet",Charachter);
	}

	return 0;
}
