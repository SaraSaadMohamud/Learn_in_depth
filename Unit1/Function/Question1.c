/*
 ============================================================================
 Name        : Question1.c
 Author      : Sara Saad
 Version     :
 Copyright   : Your copyright notice
 Description :Prime Number between the Range that gived by USer
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void Get_PinaryNumbers(unsigned int Start,unsigned int End);
int main(void)
{
	unsigned int Initial=0;
	unsigned int Ending=0;

    printf("Enter the Start Number : ");
    fflush(stdin);
    fflush(stdout);
    scanf("%i",&Initial);

    printf("Enter the Start Number : ");
    fflush(stdin);
    fflush(stdout);
    scanf("%i",&Ending);

    Get_PinaryNumbers(Initial,Ending);

	return 0;
}
void Get_PinaryNumbers(unsigned int Start,unsigned int End)
{
	for(int i=Start; i<=End ;i++)
	    {
	    	unsigned int Flag=0;
	    	for(int j=2 ; j<i ; j++)
	    	{
	    		Flag=0;
	    		if(i%j == 0)
	    		{
	    			break;
	    		}
	    		else
	    		{
	    			Flag=1;
	    		}
	    	}
	    	if(Flag ==1)
	    	{
	    		printf("%i ",i);
	    	}
	    }
}
