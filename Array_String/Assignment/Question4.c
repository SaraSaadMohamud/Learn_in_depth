/*
 ============================================================================
 Name        : Question6.c
 Author      : Sara Saad
 Version     :
 Copyright   : Your copyright notice
 Description : c programm to insert element in an array
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
    int Insert_Element=0;
    int Insert_Position;
    int i=0;

    for(i=0 ; i<Number_Element ; i++)
    {
    	fflush(stdin);
    	fflush(stdout);
    	scanf("%i",&Array_Data[i]);
    }

    for(i=0 ; i<Number_Element ; i++)
        {
        	printf("%i\t",Array_Data[i]);
        }
    printf("\n");

    printf("Enter the element to be insert : ");
    fflush(stdin);
    fflush(stdout);
    scanf("%i",&Insert_Element);

    printf("Enter the Location : ");
    fflush(stdin);
    fflush(stdout);
    scanf("%i",&Insert_Position);

    for(i=Number_Element ; i>=Insert_Position ; i--)
    {
    	Array_Data[i]=Array_Data[i-1];
    }
    Array_Data[Insert_Position-1]=Insert_Element;
    for(i=0 ; i<=Number_Element ; i++)
            {
            	printf("%i\t",Array_Data[i]);
            }
	return 0;
}
