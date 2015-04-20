#include<stdio.h>
#include<conio.h>
void main()
{int a,b,c,big;
clrscr();
printf("\n Enter 3 no.'s:");
scanf("%d%d%d",&a,&b,&c);
big=a;
if(big<b)
big=b;
if(big<c)
big=c;
printf("\n Biggest is %d",big);
getch();}