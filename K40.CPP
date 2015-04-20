/*
	control statements
	1. if-else
	2. switch-case

	program to print largest among two number


	if()       //nested if
	{
		if()
		{

		}
		else
		{
		}
	}
	else
	{
		if()
		{
		}
		else
		{
		}
	}

*/

#include<conio.h>
#include<stdio.h>

void main()
{
	int x,y,z;
	clrscr();

	printf("\nEnter three number: ");
	scanf("%d%d%d",&x,&y,&z);

	if(x>y)
	{
		if(x>z)
			printf("\nLargest = %d",x);
		else
			printf("\nLargest = %d",z);
	}
	else
	{
		if(y>z)
			printf("\nLargest = %d",y);
		else
			printf("\nLargest = %d",z);
	}
	getch();
}

