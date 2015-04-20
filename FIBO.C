#include<stdio.h>
#include<conio.h>
int fib(int a);
void main()
{
int a,i;
clrscr();
printf("\n enter a:");
scanf("%d",&a);
for(i=0;i<a;i++)
printf("%d\n",fib(i));
getch();
}

int fib(int a)
{
if(a==0)
return 0;
if(a==1)
return 1;
else
return (fib(a-1)+fib(a-2));
}