/*
	program to add two number



	datatype : int

	variable : a  b	 c

	operator : = , ; +

	constant : 10  20

	function : clrscr()

	format specifier : %d

	escape sequence : \n




	datatype
	1. primitive      format specifier
			int				%d
			char            %c
			float           %f
			double          %lf
			void             nothing

	2. non-primitive (based on primitive)
			array		int x[5];
			pointer 	char *p;
			structure
						struct employee
						{
							int id;
							float sal;
						};

	variable : is a name given to address

			int x;	-> 2 bytes of memory is allocated


			RAM
					x
			?	?	?	?	?
			100 101 102
			?	?	?	?	?


	bit 	-> binary digit

		1001 	4bits -> Nibble
				8 bits -> 1 byte
				1024 bytes -> 1 KiloByte
				1024 KB -> 1 MegaByte

	kb
	mb
	gb
	tb
	byte

	constant : which does not change

	integer	:		50		-30		+6		0
	real    :		50.5	-3.5
	character : any single character within single quotes
			'p'	'w'	'!'	'8'

	ASCII -> American Standar Code for Information Interchange

			a-z		97-122
			A-Z		65-90
			0-9		48-57

	10	->		1010





	string

*/

#include<stdio.h>
#include<conio.h>

main()
{
	int a=10,b=20;
	int c;
	clrscr();
	c = a + b;
   //	gotoxy(35,12);
	printf("%d",c);
	getch();
}
