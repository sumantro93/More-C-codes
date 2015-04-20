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
	int a=100,b=20,r;
	clrscr();

	r = a>b ? a : b;

	printf("\nr = %d",r);

	getch();
}