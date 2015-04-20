#include <stdio.h>
#include<conio.h>
int BinarySearch(int *,int ,int);
int pos,num;
void main()
{
	int a[20],i,n,high,low,flag;
	clrscr();
	printf("Enter the number of items in the array : ");
	scanf("%d",&n);
	printf("Enter the items : ");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number you want to search : ");
	scanf("%d",&num);
	low = 0;
	high = n-1;
	flag = BinarySearch(a,low,high);
	if(flag == 1)
		printf("The element is present in position %d",pos);
	else
		printf("Element not found . %d",flag);
	getch();
}

int BinarySearch(int a[],int low, int high)
{
	int mid=(low+high)/2;
	if(a[mid] == num)
	{
		pos = mid+1;
		return 1;
	}
	else
	{
		if(low == high)
			return 0;
		else
		{
			if(num > a[mid])
				BinarySearch(a,mid+1,high);
			else
				BinarySearch(a,low,mid-1);
		}
	}
}