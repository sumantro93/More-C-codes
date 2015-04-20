/*
	print 1-10

	syntax:

		while 		vs		do-while

		1. while loop is entry controlled loop
		1. do-while is exit controlled loop

		2.  body may or may not execute
		2.  body will execute atleast once



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