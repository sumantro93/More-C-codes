/*
*/

#include<conio.h>
#include<stdio.h>

void main()
{
	int i=3,j=5;
	clrscr();
	i = ++i + i++;
	j = j++ * ++j;
	printf("\ni = %d, j = %d",i,j);
	getch();
}
//9 37
//9 31
//9 37
//10 38
//9 37
//10 27



