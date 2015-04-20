#include<stdio.h>
#include<conio.h>
void main()
{clrscr();
int add[10][10],i,j,r1,c1,r2,c2,m1[10][10],m2[10][10];
printf("\n Enter the rows & columns of 1st matrix:");
scanf("%d%d",&r1,&c1);
printf("\n Enter the rows & columns of 2nd matrix:");
scanf("%d%d",&r2,&c2);
if(r1==r2&&c1==c2)
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
printf("\n Addition of matrices");
for(i=0;i<r1;i++)
{for(j=0;j<c2;j++)
{add[i][j]=m1[i][j]+m2[i][j];
printf("%d\t",&add[i][j]);
}
printf("\n");
}}
else printf("\n matrix can't b done");
getch();
}
