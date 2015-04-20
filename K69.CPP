/*

*/

#include<stdio.h>
#include<conio.h>
#include<ctype.h>


void main()
{
	char ch;
	printf("\nEnter the character: ");
	scanf("%c",&ch);

//	printf("%d",ch);
	printf("%d",toascii(ch));
	getch();

}