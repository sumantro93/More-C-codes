#include<stdio.h>
#include<conio.h>
void main()
{clrscr();
int n,num,rev=0,m,i;
printf("\n enter no.:");
scanf("%d",&num);
n=num;
while(n!=0)
{m=n%10;
rev=rev*10+m;
n=n/10;}
if(num==rev)
printf("\n %d is palindrome",num);
else printf("\n %d is not a palindrome",num);
getch();
}

