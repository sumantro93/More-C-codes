/*
	Operators (Predefined Symbol)

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


	sizeof -> used to know the memory occupied by a particular type


	int	->	2 bytes
	float -> 4 bytes
	double -> 8 bytes
	char -> 1 byte



*/

#include<conio.h>
#include<stdio.h>

main()
{
	clrscr();
	printf("\n%d",sizeof(char));
	printf("\n%d",sizeof(int));
	printf("\n%d",sizeof(float));
	printf("\n%d",sizeof(double));

	printf("\n%d",sizeof('0')); //1
	printf("\n%d",sizeof(1000));  //2
	printf("\n%d",sizeof(5.5));  //8
	printf("\n%d",sizeof(5.5f));	//4

	printf("\n%d",sizeof("Heritage College")); //17
	printf("\n%d",sizeof("")); //1

//	printf("\n%d",sizeof(''));	//error

	getch();
}

