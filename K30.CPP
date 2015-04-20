/*
*/

#include<conio.h>
#include<stdio.h>

void main()
{
	int i=3,j=5;
	clrscr();
	i = ++i + ++i;
	j = j++ * j++;
	printf("\ni = %d, j = %d",i,j);
	getch();
}

//9 42
//8 36
//9 42
//error
//9 36
//10 27






