#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{clrscr();
int cs,m,ee,per,agg;
printf("\n enter the marks:");
scanf("%d%d%d",&cs,&m,&ee);
agg=cs+m+ee;
per=agg/3;
if(per>=75&&per<100)
{printf("\n ur percentage obtained is %d & aggregate marks is %d",per,agg);
printf("\n ur grade is Distinction");
getch();
exit(0);}
if(per>=60&&per<75)
{printf("\n ur percentage obtained is %d & aggregate marks is %d",per,agg);
printf("\n ur grade is First class");
getch();
exit(0);}
if(per>=50&&per<60)
{printf("\n ur percentage obtained is %d & aggregate marks is %d",per,agg);
printf("\n ur grade is Second class");
getch();
exit(0);}
if(per<50)
{printf("\n ur percentage obtained is %d & aggregate marks is %d",per,agg);
printf("\n ur grade is Fail");
getch();
exit(0);}
}