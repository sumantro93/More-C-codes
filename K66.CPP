/*
	program to find the absolute value of number

	input:
		N = 5			-65

		output:
			5            65
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int n,r;
	clrscr();
	printf("\nN = ");
	scanf("%d",&n);

	r = abs(n);

	printf("Absolute Value = %d",r);
	getch();
}