/*
 ============================================================================
 Name        : Question5.c
 Author      : Sara Saad
 Version     :
 Copyright   : Your copyright notice
 Description : Cprogramm to find transpose of Matrix
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int Number_Row=0;
	int Number_Colum=0;

	printf("Enter rows and colums of Matrix : ");
    fflush(stdin);
    fflush(stdout);
	scanf("%i",&Number_Row);
	scanf("%i",&Number_Colum);

	int Array[Number_Row][Number_Colum];
	int Transpose_Array[Number_Row][Number_Colum];
	int i=0;
	int j=0;

	printf("Enter Element of Matrix :\n");
	for(i=0 ; i<Number_Row ; i++)
			{
				for(j=0 ; j<Number_Colum ; j++)
				{
					printf("Enter element [%i][%i] : ",i+1,j+1);
					fflush(stdin);
					fflush(stdout);
					scanf("%i",&Array[i][j]);
				}
			}

	printf("Entered Matrix : \n");
	for(i=0 ; i<Number_Row ; i++)
		{
			for(j=0 ; j<Number_Colum ; j++)
			{
				printf("%i\t",Array[i][j]);
			}
			printf("\n");
		}

	for(i=0 ; i<Number_Row ; i++)
	{
		for(j=0 ; j<Number_Colum ; j++)
		{
			Transpose_Array[j][i]=Array[i][j];
		}
	}

	printf("Transpose of Matrix : \n");
	for(i=0 ; i<Number_Colum ; i++)
			{
				for(j=0 ; j<Number_Row ; j++)
				{
					printf("%i\t",Transpose_Array[i][j]);
				}
				printf("\n");
			}

	return 0;
}
