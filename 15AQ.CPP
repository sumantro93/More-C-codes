#include<stdio.h>
#include<conio.h>
void main()
{clrscr();
int n,i,j,a[10][10];
printf("\n entr no. f l9:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{for(j=1;j<=i;j++)
 {if(j==1||i==j)
 a[i][j]=1;
 else
 a[i][j]=a[i-1][j-1]+a[i-1][j];
 }}
for(i=1;i<=n;i++)
{for(j=1;j<=n-i;j++)
 printf(" ");
 for(j=1;j<=i;j++)
printf("%d ",a[i][j]);
printf("\n");
}
getch();
}
