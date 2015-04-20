/*

		program to accept a range and print all odd numbers in that range

		input : 10 - 16

		output: 11	13	15


*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int low,up,i,cnt=0;

	clrscr();
	printf("\nEnter lower range: ");
	scanf("%d",&low);  //10

	printf("\nEnter upper range: ");
	scanf("%d",&up); //16

	for(i=low;i<=up;i++)
	{
		if(i%2!=0)
		{
			printf("%4d",i);
			cnt++;
		}
	}

	printf("\nTotal odd = %d",cnt);



	getch();
}