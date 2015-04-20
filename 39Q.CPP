#include<stdio.h>
#include<conio.h>
void main()
{clrscr();
int i,l;
char a[10],b[10];
printf("\n Enter string:");
gets(a);
for(i=0;a[i]!='\0';i++);
for(l=0;l<i;l++)
{b[l]=a[l];}
printf("\n Copied string is:");
puts(b);
getch();
}
