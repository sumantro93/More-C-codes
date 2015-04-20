#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{clrscr();
int x;
float y;
printf("\n enter x:");
scanf("%d",&x);
if(x==0)
{printf("\n F(%d)=%d",x,x);
}
if(x<0)
{y=1+(x/(sqrt(1+x*x)));
printf("\n F(%d)=%f",x,y);}
if (x>0)
{y=1-(x/(sqrt(1+x*x)));
printf("\n F(%d)=%f",x,y);}
getch();
}