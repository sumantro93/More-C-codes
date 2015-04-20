#include<stdio.h>
#include<conio.h>
void main()
{clrscr();
int a,b,c,big;
printf("\n Enter a,b,c:");
scanf("%d%d%d",&a,&b,&c);
(a>b&&a>c)?(big=a):((b>a&&b>c)?(big=b):(big=c));
printf("\n Biggest =%d",big);
getch();
}
