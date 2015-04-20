/*

	input:
			453

	output:
			354

			[ hints use % operator ]

			453%10 => 3
			45%10 => 5
			4%10 => 4
*/

#include<stdio.h>
#include<conio.h>


void main()
{
	int n;
	clrscr();
	printf("\nEnter the number: ");
	scanf("%d",&n);	//153

	while(n>0)
	{
		printf("%d",n%10);//351
		n=n/10;	//15	1 	0
	}

	getch();
}