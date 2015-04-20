/*
		2000		Leap Year
		2005		Not Leap Year
		2004		Leap Year
		1900		Not Leap Year

*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int yr;
	clrscr();
	printf("\nEnter the year:");
	scanf("%d",&yr);

	if(yr%4==0)
	{
		if(yr%100==0 && yr%400!=0)
			printf("\nNot leap Year");
		else
			printf("\nLeap Year");
	}
	else
		printf("\nNot Leap Year");

getch();
}