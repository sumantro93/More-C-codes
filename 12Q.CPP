#include<stdio.h>
#include<conio.h>
void main()
{clrscr();
int fact=1,i,n;
printf("\n enter n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{fact=fact*i;}
printf("\n Factorial of %d is %d",n,fact);
getch();
}

