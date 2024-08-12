/*
 ============================================================================
 Name        : Question4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : c program to Calculate the power of Number using Recursion
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void Get_Power(unsigned int Number,unsigned int Count,unsigned int *Power);
int main(void)
{
	unsigned int Number=0;
    unsigned int Power=1;
	printf("Enter the Number : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%i",&Number);
    unsigned int Count=Number;
    Get_Power(Number,Count,&Power);
    printf("%i ^ %i = %i\n",Number ,Number ,Power);
	return 0;
}
void Get_Power(unsigned int Number,unsigned int Count,unsigned int *Power)
{

  *Power= (*Power*Count);
   Number--;
  if(Number >0)
  {
	  Get_Power(Number,Count,Power);
  }

}
