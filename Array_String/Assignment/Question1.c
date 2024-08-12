/*
 ============================================================================
 Name        : Question3.c
 Author      : Sara Saad
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	    float Array1[2][2];
	    float Array2[2][2];
	    float Array3[2][2];
	    int i=0;
	    int j=0;

	    printf("Enter the elements of array1...\n");
	    for(i=0 ; i<2 ; i++)
	    {
	    	for(j=0; j<2 ; j++)
	    	{
	    		printf("Enter Element [%i][%i] : ",i+1,j+1);
	    		fflush(stdin);
	    		fflush(stdout);
	    		scanf("%f",&Array1[i][j]);
	    	}
	    }

	    printf("Enter the elements of array2...\n");
	    for(i=0 ; i<2 ; i++)
	    	    {
	    	    	for(j=0; j<2 ; j++)
	    	    	{
	    	    		printf("Enter Element [%i][%i] : ",i+1,j+1);
	    	    		fflush(stdin);
	    	    		fflush(stdout);
	    	    		scanf("%f",&Array2[i][j]);
	    	    	}
	    	    }

	    for(i=0 ; i<2 ; i++)
	    	    {
	    	    	for(j=0; j<2 ; j++)
	    	    	{
	    	    		Array3[i][j]=Array1[i][j]+Array2[i][j];
	    	    	}
	    	    }

	    printf("Sum of Matrixs : \n");
	    for(i=0 ; i<2 ; i++)
	    	    {
	    	    	for(j=0; j<2 ; j++)
	    	    	{
	    	    		printf("%0.1f\t ",Array3[i][j]);
	    	    	}
	    	    	printf("\n");
	    	    }
		return 0;
}
