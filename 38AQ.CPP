#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{clrscr();
char a[20],p[20];
int i;
printf("\n Enter string:");
gets(a);
strcpy(p,a);
strrev(p);
if(strcmp(a,p)==0)
{printf("\n String is palindrome");}
else printf("\n String is not a palindrome");
getch();}
