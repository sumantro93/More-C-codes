#include<stdio.h>
#include<conio.h>
int m[10][10],s[10][10];
void Matrix_Chain_Mult(int *,int);
void Display(int,int);
void main()
{
	int p[10],n,i,j;
	clrscr();
	printf(" Enter the number of matrix :");
	scanf("%d",&n);
	printf(" Enter the order of matrices :");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&p[i]);
	}
	printf("\n\n");
	Matrix_Chain_Mult(p,n);
	Display(1,n);
	printf("\n\n cost of the matrix is :%d",m[1][n]);
	
	printf("\n\n sequence :\n");
	for(i=1;i<=n;i++)
	{
		printf("\n");
		for(j=1;j<=n;j++)
		{
			printf("%d\t",s[i][j]);
		}
	 }
	 printf("\n\n cost matrix :\n");
	 for(i=1;i<=n;i++)
	 {
		printf("\n");
		for(j=1;j<=n;j++)
		{
			printf("%d\t",m[i][j]);
		}
	 }
	 getch();
}
void Matrix_Chain_Mult(int p[],int n)
{
	int i,j,k,l,q;
	for(i=1;i<=n;i++)
	{
		m[i][i]=0;
	}
	for(l=2;l<=n;l++)
	{
		for(i=1;i<=(n-l+1);i++)
		{
			j=i+l-1;
			m[i][j]=32000;
			for(k=i;k<=(j-1);k++)
			{
				q=m[i][k]+m[k+1][j]+(p[i-1]*p[k]*p[j]);
				if(q<m[i][j])
				{
					m[i][j]=q;
					s[i][j]=k;
				}
			}
		}
	}
}
void Display(int i,int j)
{
	if(i==j)
	{
		printf("A%d",i);
	}
	else
	{
		printf(" ( ");
		Display(i,s[i][j]);
		Display(s[i][j]+1,j);
		printf(" ) ");
	}
}