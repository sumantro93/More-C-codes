#include<stdio.h>
#include<conio.h>
int main(void)
{
	void backsubs(float [][10],float [], int);
	float a[10][10],b[10],tem=0,temp=0,temp1=0,temp2=0,temp4=0,temp5=0;
	int n=0,m=0,i=0,j=0,p=0,q=0;
	printf("Enter size of 2d array(Square matrix) : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter values no. %d %d :",i,j);
			scanf("%f",&a[i][j]);
		}
	}
	printf("\nEnter Values to the right side of equation\n");
	for(i=0;i<n;i++)
	{
			printf("Enter values no. %d :",i,j);
			scanf("%f",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		temp=a[i][i];
		if(temp<0)
		temp=temp*(-1);
		p=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j][i]<0)
				tem=a[j][i]*(-1);
			else
				tem=a[j][i];
			if(temp<0)
				temp=temp*(-1);
			if(tem>temp)
			{
				p=j;
				temp=a[j][i];
			}
		}
		//row exchange in both the matrix
		for(j=0;j<n;j++)
		{
			temp1=a[i][j];
			a[i][j]=a[p][j];
			a[p][j]=temp1;
		}
		 temp2=b[i];
		 b[i]=b[p];
		 b[p]=temp2;
		//making downwards elements 0 in order to make the matrix a[][] suitable for back substitution
		temp4=a[i][i];
		for(q=i+1;q<n;q++)
		{
			temp5=a[q][i];
			for(j=0;j<n;j++)
			{
				a[q][j]=a[q][j]-((temp5/temp4)*a[i][j]);
			}
			b[q]=b[q]-(temp5/temp4*b[i]);
		}
	}
	backsubs(a,b,n);
	getch();
   return 0;
}
void backsubs(float a[][10],float b[], int n)
{  int i=0,j=0;
	for(i=n-1;i>=0;i--)
	{
		for(j=n-1;j>i;j--)
		{
			b[i]=b[i]-a[i][j]*b[j];
		}
		b[i]=b[i]/a[i][i];
		printf("x%d = %f\n",i+1,b[i]);
	}
}