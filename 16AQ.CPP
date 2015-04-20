#include<stdio.h>
#include<conio.h>
void main();
{int n,i,sum=0;
printf("enter n:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{sum=sum+i;
}
printf("Sum f %d terms is %d",n,sum);
getch();}