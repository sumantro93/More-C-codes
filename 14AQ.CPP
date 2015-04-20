#include<stdio.h>
#include<conio.h>
void main()
{clrscr();
int n,i;
printf("\n enter n: ");
scanf("%d",&n);
for(i=2;i<n;i++)
{if(n%i==0)
{printf("\n No. is not prime");
break;}
}
if(i==n)
 printf("\n No. is a prime");
getch();
}
