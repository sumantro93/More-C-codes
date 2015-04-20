/*

		program to find factorial of a number

		5 -> 5 x 4 x 3 x 2 1 => 120
		4	->	24
		0	->	1


*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,f=1;
	clrscr();
	printf("\nEnter a number: ");
	scanf("%d",&n);  	//5

	for(i=n;i>=1;i--)	//5-1
	{
		f=f*i;
	}

	printf("\nFactorial of %d is %d",n,f);

	getch();
}