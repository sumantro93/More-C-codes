#include<stdio.h>
#include<conio.h>
void main()
{clrscr();
int i;
char c[20];
printf("\n Enter the string:");
gets(c);
for(i=0;c[i]!='\0';i++);
printf("%d",i);
getch();}
