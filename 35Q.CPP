#include<stdio.h>
#include<conio.h>
void main()
{clrscr();
int i,j,k,r1,c1,r2,c2,mult[10][10],m1[10][10],m2[10][10];
printf("\n Enter the rows & columns of 1st matrix:");
scanf("%d%d",&r1,&c1);
printf("\n Enter the rows & columns of 2nd matrix:");
scanf("%d%d",&r2,&c2);
if(r2==c1)
{{printf("\n enter the elements of 1st matrix row wise:");
for(i=0;i<r1;i++)
for(j=0;j<c1;j++)
scanf("%d",&m1[i][j]);}
printf("\n 1st matrix:");
for(i=0;i<r1;i++)
{for(j=0;j<c1;j++)
printf("%d\t",&m1[i][j]);
printf("\n");
}
{printf("\n enter the elements of 2nd matrix row wise:");
for(i=0;i<r2;i++)
for(j=0;j<c2;j++)
scanf("%d",&m2[i][j]);}
printf("\n 2nd matrix:");
for(i=0;i<r2;i++)
{for(j=0;j<c2;j++)
printf("%d\t",&m2[i][j]);
printf("\n");
}
printf("\n Multiplication of matrices");
for(i=0;i<r1;i++)
{for(j=0;j<c2;j++)
{mult[i][j]=0;
for(k=0;k<r1;k++)
mult[i][j]+=m1[i][j]*m2[i][j];
printf("%d\t",&mult[i][j]);
}
printf("\n");
}}
else printf("\n matrix can't b done");
getch();
}
