/*

	input:
		n=5
		p=3

	ouput:
		result = 125


*/

#include<stdio.h>
#include<conio.h>


void main()
{
	int n,p,r=1,i;
	clrscr();

	printf("\nEnter number: ");
	scanf("%d",&n);		//5

	printf("\nEnter power: ");
	scanf("%d",&p);  //3

	for(i=1;i<=p;i++)   //123
		r=r*n;


	printf("\nResult = %d",r);

	getch();
}