#include<stdio.h>
#include<conio.h>
void main()
{clrscr();
int n,i,j,k;
printf("\n Enter n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{for(j=1;j<=i;j++)
{k=i+j;
if(k%2==0)
printf("1 ");
else printf("0 ");}
printf("\n");}
getch();}
