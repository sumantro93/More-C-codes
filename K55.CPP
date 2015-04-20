/*
	to print table of an entered number as follows

	5	x	1	=	5
	5	x	2	=	10
	5	x	3	=	15
	...
	....
	5	x	10	=	50


*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i;
	clrscr();
	printf("\nEnter the number: ");
	scanf("%d",&n);  //keyboard to variable

	for(i=1;i<=12;i++)
		printf("\n%d x %d = %d",n,i,n*i);


	getch();
}