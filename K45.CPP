/*
	control statement

	SWITCH - CASE

	syntax

		switch(expression)
		{
			case constant1:
				statements;
			case constant2:
				statements;
			case constant3:
				statements;
			....
			....
			...
			default:
				statements
		}



*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int choice=5;
	clrscr();

	switch(choice)
	{
		case 1:
			printf("\nONE");
		case 2:
			printf("\nTWO");
		case 3:
			printf("\nTHREE");
		case 4:
			printf("\nFOUR");
		default:
			printf("\nDEFAULT");
	}

	getch();
}