#include<stdio.h>
#include<conio.h>
void main()
{clrscr();
int i,j,n,k,m;
printf("\n enter n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{for(j=1;j<=n-i;j++)
 printf(" ");
for(j=1;j<=i;j++)
printf("%d",j);
m=j-2;
for(k=1;k<=i-1;k++)
printf("%d",m--);
printf("\n");}
getch();}
