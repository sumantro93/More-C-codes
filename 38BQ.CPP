#include<stdio.h>
#include<conio.h>
void main()
{clrscr();
int i,len,j;
char a[20];
printf("\n enter the string:");
gets(a);
for(i=0;a[i]!='\0';i++)
len=i;
for(i=0,j=len-i-1;i<j;i++,j--)
{if(a[i]!=a[j])
break;}
if(i<j)
printf("\n String is not a palindrome");
else printf("\n String is a palindrome");
getch();
}
