/*
 ============================================================================
 Name        : Question9.c
 Author      : Sara Saad
 Version     :
 Copyright   : Your copyright notice
 Description : c programming to find the lebght of string
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char String[rand()];
    int String_Lenght=0;
    int i=0;

    printf("Enter a string : ");
    fflush(stdin);
    fflush(stdout);
    gets(String);

    for(i=0 ; String[i] != '\0' ; i++)
    {
    	String_Lenght++;
    }

    printf("Lenght of String : %i\n",String_Lenght);
	return 0;
}
