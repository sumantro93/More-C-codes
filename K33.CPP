/*

		in function -> parameter is always passed from right to left


		x=11

		x++, ++x , x+1, x++
		10	  10   10	8



		x = x + 1
		x + 1
*/

#include<conio.h>
#include<stdio.h>

void main()
{
	int x=8;
	clrscr();
	printf("\n%d %d %d %d",x++,++x,x+1,x++);
	getch();
}

//8 9 9 8
//8 9 9 10
//8 9 10 10
//10 10 10 10
//8 9 9 10


//10 10 10 8

