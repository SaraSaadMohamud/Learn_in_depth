/*
 ============================================================================
 Name        : Question7.c
 Author      : Sara Saad
 Version     :
 Copyright   : Your copyright notice
 Description : To search an Element in the Array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int Number_Element=0;

	printf("Enter number of Element : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%i",&Number_Element);

	int Array_Data[Number_Element];
	int Search_Element=0;
	int i=0;

	for(i=0 ; i<Number_Element ; i++)
	{
		fflush(stdin);
		fflush(stdout);
		scanf("%i",&Array_Data[i]);
	}

	printf("Enter the Element to b Search : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%i",&Search_Element);

	for(i=0 ; i<Number_Element ; i++)
	{
		if(Search_Element == Array_Data[i])
		{
			printf("Number found at location %i\n",i+1);
			return(0);
		}
	}
	printf("The Number didn't find !!!");
	return 0;
}
