#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int row=0;
int a[10];
void display();
int check(int r, int c);
void queen();



void display()
{
int i,j;

for(i=1;i<=8;i++){
	for(j=1;j<=8;j++)
   	if(a[j]==i)
   	printf("Q\t");
      else
   	printf("H\t");
   printf("\n");
   }
}

int check(int r, int c)
{
int i;
for(i=1;i<=r-1;i++)
	if(a[i]==c) return 0;
for(i=1;i<=r-1;i++)
	if(r-i==abs(c-a[i])) return 0;
return 1;
}

void queen()
{
int col;
row++;
for(col=1;col<=8;col++)
{
   if(check(row,col)){
   	a[row]=col;
   	if(row==8)
   	{
      display();
      getch();
   	exit(1);
   	}
      queen();
   }
}
row--;
}

void main()
{
queen();
}
