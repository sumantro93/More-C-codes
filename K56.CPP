/*
	print 1-10

	syntax:
			while(condition)
			{
				//body of the loop
			}

*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1;
	clrscr();
	while(i<=10)
	{
		printf("%4d",i);
		i++;
	}
	getch();
}