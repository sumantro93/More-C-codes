/*

	wap to check whether number is palindrome or not

	121	-> palindrome
	123	-> not palindrome

*/

#include<stdio.h>
#include<conio.h>


void main()
{
	int n,r,rev=0,num;
	clrscr();
	printf("\nEnter the number: ");
	scanf("%d",&n); //123

	num=n;  //123

	while(n>0)   //123	12    1
	{
		r=n%10;	//3 	->	2  ->	1
		rev=rev*10+r;	//3	->	32	-> 321
		n=n/10;		//12	->	1 	->	0

	}

	if(rev==num)
		printf("\nPalindrome");
	else
		printf("\nNot Palindrome");

	getch();
}