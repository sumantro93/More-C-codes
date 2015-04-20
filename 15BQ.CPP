#include<stdio.h>
#include<conio.h>
void main()
{clrscr();
int n,i,j,k;
printf("\n enter the no. of line:");
scanf("%d",&n);
for(i=n;i>=1;i--)
{for(k=1;k<=i;k++)
 printf("%d ",k);
printf("\n");}
 getch();
}