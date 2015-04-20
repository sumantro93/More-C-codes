#include<stdio.h>
#include<conio.h>
#include<Ctype.h>
void main()
{clrscr();
int i,spe,vowels,digits,cons;
char a[10];
printf("\n Enter string:");
gets(a);
i=0;
spe=0;
vowels=0;
digits=0;
cons=0;
while(a[i]!='\0')
{if(a[i]>='A'&& a[i]<='Z')
if(isupper (a[i]))
{a[i]=a[i]+32;
tolower(a[i]);}
else if(a[i]>='a'&& a[i]<='z')
{a[i]=a[i]-32;
}
i++;}}
puts(a);
while(a[i]!='\0')
{if(a[i]=='A' || a[i]=='a' || a[i]=='E' || a[i]=='e' || a[i]=='I'
|| a[i]=='i' || a[i]=='O' || a[i]=='o' || a[i]=='U' || a[i]=='u')
}
vowels++;
else if(isalpha(a[i]))
cons++;
else if(isdigit (a[i]))
digits++;
else spe++;
printf("\n i=%d,vowels=%d,cons=%d,spe=%d,digits=%d",i,vowels,cons,spe,digits);
getch();
}