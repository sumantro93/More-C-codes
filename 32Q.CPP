#include<stdio.h>
#include<conio.h>
void main()
{clrscr();
int a[20],n,x,i,flag=0;
printf("\n Enter n:");
scanf("%d",&n);
for(i=0;i<n;i++)
{printf("\n Enter the no.:");
scanf("%d",&a[i]);
}
printf("\n Enter the no.u want to search:");
scanf("%d",&x);
for(i=0;i<n;i++)
{if(x==a[i])
{printf("\n %d is present at %d position",x,(i+1));
flag=1;}}
if(flag==0)
{printf("\n No.is not present");}
getch();}