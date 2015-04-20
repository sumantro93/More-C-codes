/*

	Conditional Operator		?:


	a+b


	Unary :  works on single operand    ++x 	x--	+5

	Binary : works on two operand      a+b 	a-b

	Ternery : works on three operand   expr1 ? expr2 : expr3



*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	clrscr();

	printf("\nEnter Number: ");
	scanf("%d",&n);   //keyboard -> n

	n%2==0 ? printf("Even Number") : printf("Odd Number");

	getch();
}