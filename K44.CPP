/*

		a=50
		b=70
		c=45
		r=70
		l=70
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,r,l;
	clrscr();
	printf("\nEnter three numbers: ");
	scanf("%d%d%d",&a,&b,&c);

	r = a>b ? a : b;
	l = c>r ? c : r;

	printf("\nLargest = %d",l);


	getch();
}