#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{clrscr();
int a,b,c;
float d,x1,x2;
p:
printf("\n Enter a,b,c:");
scanf("%d%d%d",&a,&b,&c);
if(a==0)
{printf("\n a can't be =0");
goto p;}
d=(b*b)-(4*a*c);
if(d<0)
{printf("\n roots are imaginary.");}
else if(d==0)
{x1=((-b+(sqrt(d)))/2*a);
printf("\n roots are real & equal.roots are %f.",x1);}
if(d>0)
{x1=((-b+(sqrt(d)))/2*a);
x2=((-b-(sqrt(d)))/2*a);
printf("\n roots are real & unequal.roots are %f %f",x1,x2);}
getch();
}
