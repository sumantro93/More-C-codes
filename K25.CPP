/*
		increment/decrement operator

		++ increment operator : the value is incremented by 1
		-- decrement operator : the value is decremented by 1


		x++		post-increment		x = x + 1
				perform all other operations first then increment
		++x		pre-increment       x = x + 1
				first increment the perform all other operations



		x--		post-decrement     x = x - 1
		--x     pre-decrement      x = x - 1






*/

#include<conio.h>
#include<stdio.h>

main()
{
	int x = 5;
	clrscr();
	++x;
	printf("\nx = %d",x);   //6
	getch();
}

