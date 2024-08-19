/*
 ============================================================================
 Name        : Question4.c
 Author      : Sara Saad
 Version     :
 Copyright   : Your copyright notice
 Description : c programm to calculat the Avarage using Arrays
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int Max_Element=0;

	printf("Enter the number of data : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%i",&Max_Element);

	float Array_Date[Max_Element];
	float Sum=0;
	float Avarage=0;
	int i=0;

	for(i=0 ; i<Max_Element ; i++)
	{
		printf("%i. Enter the number : ",i+1);
		fflush(stdin);
		fflush(stdout);
		scanf("%f",&Array_Date[i]);
	}

	for(i=0 ; i<Max_Element ; i++)
	{
		Sum+=Array_Date[i];
	}
	Avarage=Sum/Max_Element;
	printf("Avarage = %0.2f \n",Avarage);
	return 0;
}
