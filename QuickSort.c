#include<stdio.h>
#include<conio.h>
void QuickSort(int *,int,int);
int Partition(int *,int,int);
void exchange(int *,int *);
void main()
{
clrscr();
int a[20],i,n,p,r;
printf("Enter the value of n : ");
scanf("%d",&n);
printf("Enter the elements : ");
for(i=1;i<=n;i++)
	{
   scanf("%d",&a[i]);
   }
p=1;
r=n;
QuickSort(a,p,r);
printf("the sorted array is : ");
for(i=1;i<=n;i++)
	{
   printf(" %d ",a[i]);
   }
getch();
}
void QuickSort(int a[],int p,int r)
{
int q;
if(p < r)
	{
   q=Partition(a,p,r);
   QuickSort(a,p,q-1);
   QuickSort(a,q+1,r);
   }
}

int Partition(int a[],int p,int r)
	{
   int i,j,x;
   x=a[r];
   i=p-1;
   for(j=p;j<=r-1;j++)
   	{
      if(a[j]<=x)
      	{
         i++;
         exchange(&a[i],&a[j]);
         }
      }
   exchange(&a[i+1],&a[r]);
   return i+1;
   }
void exchange(int *a,int *b)
{
int c;
c=*a;
*a=*b;
*b=c;
}

//Output
//Enter the value of n : 5
//Enter the elements : 1 3 9 5 2
//the sorted array is :  1  2  3  5  9