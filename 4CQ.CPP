#include<stdio.h>
#include<conio.h>
void main()
{clrscr();
int a,b,c,big;
printf("enter a,b,c:");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{if(a>c)
{big=a;}
else big=c;}
else {if(b>c)
{big=b;}
else big = c;}
printf("\n biggest no. is: %d",big);
getch();
}

