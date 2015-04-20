/*
	control statements
	1. if-else
	2. switch-case

	program to print largest among two number

*/

#include<conio.h>
#include<stdio.h>

void main()
{
	int x,y;
	clrscr();

	printf("\nEnter two number: ");
	scanf("%d%d",&x,&y);

	if(x>y)
		printf("\nx = %d",x);
	else if(x==y)
		printf("\nBoth are equal");
	else
		printf("\ny = %d",y);


	getch();
}

