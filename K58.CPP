/*
	print 1-10

	syntax:

		do
		{

			//body of the loop

		} while(condition);

*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1;
	clrscr();
	do
	{
		printf("%4d",i);
		i++;
	} while(i<=10);

	getch();
}