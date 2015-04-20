/*

		in function -> parameter is always passed from right to left


		x=9

		--x		x++		x-1		++x
		9		9         8        9



*/

#include<conio.h>
#include<stdio.h>

void main()
{
	int x=8;
	clrscr();
	printf("\n%d %d %d %d",--x,x++,x-1,++x);
	getch();
}

//9889
//9989
//8989
//8989
//8989
//8989
//9989
//9989

