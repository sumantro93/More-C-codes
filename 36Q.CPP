#include<stdio.h>
#include<conio.h>
void main()
{clrscr();
int trans[10][10],i,j,r1,c1,m1[10][10];
printf("\n Enter the rows & columns of 1st matrix:");
scanf("%d%d",&r1,&c1);
printf("\n enter the elements of 1st matrix row wise:");
for(i=0;i<r1;i++)
{for(j=0;j<c1;j++)
scanf("%d",&m1[i][j]);
trans[j][i]=m1[i][j];}
printf("\n 1st matrix:");
for(i=0;i<r1;i++)
{for(j=0;j<c1;j++)
printf("%d\t",&m1[i][j]);
printf("\n");
}
printf("\n Transpose of matrix is");
for(i=0;i<r1;i++)
{for(j=0;j<c1;j++)
printf("%d\t",&trans[i][j]);
printf("\n");
}
getch();}
