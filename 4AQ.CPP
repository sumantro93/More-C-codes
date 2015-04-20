#include<stdio.h>
#include<conio.h>
void main()
{int a,b,c,big;
printf("\n enter the no.:");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{printf("\n A is biggest");}
else if(b>c)
{printf("\n B is biggest");}
else printf("\n C is biggest");
getch();
}

