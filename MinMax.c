
#include <stdio.h>
#include <conio.h>
int min,max,a[20];
void minmax(int ,int);
void main()
{
	int i,n;
	clrscr();
	printf("Enter the no of elements : ");
	scanf("%d",&n);
	printf("Enter the element : ");
	for(i=1; i<=n; i++)
		scanf("%d",&a[i]);
	minmax(1,n);
	printf("max = %d and min = %d", max,min);
   getch();
}

void minmax(int i,int j)
{
	int mid,max1,min1;
	if(i==j)
		{
		min = a[i];
		max = a[j];
		return;
		}
	if(i==j-1)
		{
		if(a[i] < a[j])
			{
			min = a[i];
			max = a[j];
			}
		else
			{
			min = a[j];
			max = a[i];
			}
		return;
		}

	mid=(i+j)/2;
	minmax(i,mid);
	min1=min;
	max1=max;
	minmax(mid+1,j);
	if(min1 < min)
		{
		min = min1;
		}
	if(max1 > max)
		{
		max = max1;
		}
}
