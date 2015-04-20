/*
	Write a Menu Driven program to perform the following

	1. area of circle
	2. simple interest
	3. largest among two number
	0. exit

*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


void main()
{
	int choice,p,t,a,b;
	float radius,area,r,si;
	clrscr();
	printf("\n>>>>>> MAIN MENU <<<<<<<");
	printf("\n1...Area of Circle");
	printf("\n2...Simple Interest");
	printf("\n3...Largest among two numbers");
	printf("\n0...QUIT");


	printf("\n\nPlease enter your choice: ");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			printf("\nEnter radius: ");
			scanf("%f",&radius);
			area=3.14 * radius * radius;
			printf("\nArea = %.2f",area);
			break;
		case 2:
			printf("\nEnter principal,time & rate: ");
			scanf("%d%d%f",&p,&t,&r);
			si=p*t*r/100;
			printf("\nSimple Interest = %.2f",si);
			break;
		case 3:
			printf("\nEnter two numbers: ");
			scanf("%d%d",&a,&b);

			if(a>b)
				printf("\nA is greater");
			else
				printf("\nB is greater");
			break;
		case 0:
				exit(0);	//stdlib.h or process.h
		default:
			printf("\n\nWrong Input...........");
	}
	getch();
}