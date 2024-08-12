/*
 ============================================================================
 Name        : Question_8.c
 Author      : Sara Saad
 Version     :
 Copyright   : Your copyright notice
 Description : c programming to make a simple calculator Add,Subtract,Multiply,Divid Using Switch... case
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float Num1;
	float Num2;
	char operator1=0;

	printf("Enter operator either + or - or * or / : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&operator1);

	printf("enter two number : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&Num1);
	scanf("%f",&Num2);

	switch(operator1)
	{
	case '+' :
		printf("%0.1f + %0.1f = %0.1f",Num1,Num2,Num1+Num2);
		break;
	case '-' :
		printf("%0.1f - %0.1f = %0.1f",Num1,Num2,Num1-Num2);
		break;
	case '*' :
		printf("%0.1f * %0.1f = %0.1f",Num1,Num2,Num1*Num2);
		break;
	case '/' :
		printf("%0.1f / %0.1f = %0.1f",Num1,Num2,Num1/Num2);
		break;
	}
	return 0;
}
