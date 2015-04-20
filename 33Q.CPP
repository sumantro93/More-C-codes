#include<stdio.h>
#include<conio.h>
void main()
{clrscr();
int a[20],i,j,n,t;
printf("\n How many no. you want to enter:");
scanf("%d",&n);
printf("\n enter the no.:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=1;i<n;i++)
{for(j=0;j<=n-i-1;j++)
{if(a[j]>a[j+1])
{t=a[j];
a[j]=a[j+1];
a[j+1]=t;}}}
printf("\n After sorting the list is:");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
getch();}