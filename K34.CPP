/*

		in function -> parameter is always passed from right to left


		x=5

		x--,	--x,	x+1	,	x--
		6		 6		8		8

*/

#include<conio.h>
#include<stdio.h>

void main()
{
	int x=8;
	clrscr();
	printf("\n%d %d %d %d",x--,--x,x+1,x--);
	getch();
}
