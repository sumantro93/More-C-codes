/*
	Operators (Predefined Symbol)

	Arithmetic Operator
	+ - / % *
	Logical Operator
	&& || !
	Conditional Operator
	?:
	Relational Operator
	< > <= >= != ==
	Assignment Opeartor
	= += -= /= etc..
	Increment/Decrement Operator
	++		--
	Bitwise Operator
	<<	>>	^	& |
	Sizeof Operator
		sizeof()


	unary
	binary
	ternery


*/

#include<conio.h>
#include<stdio.h>

main()
{
	float x;

	clrscr();
	x = 5.0 % 2.5;		//error : illegal use of floating point
	printf("\n%f",x);
	getch();
}
