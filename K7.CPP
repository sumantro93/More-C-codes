/* Program to multiply two number



	datatype -> format specifier

	char -> %c
	float -> %f
	double -> %lf
	int -> %d
	void (will be discussed later)

	datatype
	1.	primitive
		int char float double
	2.  non-primitive
		 array, pointer, structure, union etc..


	Format Specifier : %d
	DataType : int
	Operator : =
	variable : a
	function : clrscr()
	escape sequence : \n


	Operator : are pre-defined symbols
	+ - * % =


*/


#include<conio.h>
#include<stdio.h>

main()
{
	int a=10,b=5;
	int c;
	clrscr();
	c=a*b;
	printf("\n%d",c);
	getch();
}
