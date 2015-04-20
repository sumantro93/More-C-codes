#include<stdio.h>
#include<conio.h>
void main()
{clrscr();
int n,i,j,sum=0;
printf("\n enter n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{ printf("(");
 for(j=1;j<=i;j++)
 {sum=sum+j;
 printf("%d+",j);}
printf(")+");}
printf("\n =%d",sum);
getch();}