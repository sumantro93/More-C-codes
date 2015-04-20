#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{clrscr();
int n,x,i,sum=1,j=1;
printf("\n enter n & x:");
scanf("%d%d",&n,&x);
for(i=2;i<=n;i++)
{if(i%2==0)
{sum=(sum)+(-1)*pow(x,j);
} else
     {sum=(sum)+pow(x,j);}
j=j+2;}
printf("\n result is %d",sum);
getch();}
