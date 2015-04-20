#include<stdio.h>
#include<conio.h>
void main()
{clrscr();
int i,sum=0,n;
printf("\n enter n terms:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{sum=sum+(i*i);}
printf("\n Sum upto %d terms is %d",n,sum);
getch();}