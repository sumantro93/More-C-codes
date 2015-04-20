/*

	input:
		n=5
		p=3

	ouput:
		result = 125


*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int n,p,r;
	clrscr();

	printf("\nEnter number: ");
	scanf("%d",&n);

	printf("\nEnter power: ");
	scanf("%d",&p);

	r = pow(n,p);

	printf("\nResult = %d",r);

	getch();
}