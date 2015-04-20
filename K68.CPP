/*
	program to print all armstrong number
*/

#include<stdio.h>
#include<conio.h>


void main()
{
	int i,s,n,r;
	clrscr();

	for(i=1;i<=500;i++)
	{
		s=0;
		n=i;
		while(n>0)
		{
			r=n%10;
			s+=r*r*r;
			n/=10;
		}
		if(s==i)
			printf("%4d",i);
	}

	getch();
}