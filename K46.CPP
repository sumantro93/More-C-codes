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


		break -> is a keyword , on occurance of break control comes out
		of switch-case



*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int choice=2;
	clrscr();

	switch(choice)
	{
		case 1:
			printf("\nONE");
			break;
		/*case 2:
			printf("\nTWO");
			break;*/
		case 3:
			printf("\nTHREE");
			break;
		case 4:
			printf("\nFOUR");
			break;
	/*	default:
			printf("\nDEFAULT"); */
	}

	getch();
}