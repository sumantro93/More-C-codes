/*

	loop: to repeat

			types of loop

			1. for loop
			2. while loop
			3. do-while loop


	syntax:

			for([initialization] ; [condition] ; [updation])
			{
				//body of loop
			}


*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	clrscr();
	for(i=0;i<10;i=i+1)
		printf("\nKolkata");

	getch();
}