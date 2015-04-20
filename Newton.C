// NEWTONS FORWARD INTERPOLATION FORMULAE
#include<conio.h>
#include<stdio.h>
float com(float u,int i);
float fact(int i);
void box (int x,int y,int l,int b);
void main()
{
	int n,i,j,k;
	float x[10],y[10],m[10][10],x1,u,y1;
	clrscr();

//	Data Input Section

	box(20,10,2,10);
	gotoxy(23,11);
	printf(" N -> ");
	gotoxy(29,11);
	scanf("%d",&n);
	clrscr();
	box(4,5,2,3);
	gotoxy(6,6);
	printf("X ->");
	box(4,15,2,4);
	gotoxy(6,16);
	printf("Y ->");
	for(i=0,j=12;i<n;i++,j+=9)
	{
		if(i%7==0)
		j=12;
		box(j,5+(i/7)*3,2,3);
		gotoxy(j+2,6+(i/7)*3);
		scanf("%f",&x[i]);
	}
	for(i=0,j=13;i<n;i++,j+=13)
	{
		if(i%5==0)
		j=13;
		box(j,15+(i/5)*3,2,6);
		gotoxy(j+2,16+(i/5)*3);
		scanf("%f",&y[i]);
	}
	clrscr();
	box(20,10,2,10);
	gotoxy(23,11);
	printf(" X -> ");
	gotoxy(31,11);
	scanf("%f",&x1);

//	Calculation of X Value - Two Diamensional Matrix holds the intermediate values column wise.

	for(i=0;i<n;i++)
	m[i][0]=y[i];
	for(i=1;i<n;i++)
	for(j=0;j<n-i;j++)
	m[j][i]=m[j+1][i-1]-m[j][i-1];
	u=(x1-x[0])/(x[1]-x[0]);
	y1=y[0];
	for(i=1;i<n;i++)
	y1+=m[0][i]*com(u,i);
	clrscr();
	box(25,10,2,15);
	gotoxy(29,11);
	printf("Y  -> %.4f",y1);
	getch();
}
void box(int x,int y,int l,int b)
{
	int i,j;
	gotoxy(x+1,y);
	for(i=0;i<b+2;i++)
	printf("Í");
	printf("»");
	gotoxy(x,y);
	printf("É");
	for(i=0;i<l-1;i++)
	{
		gotoxy(x,y+i+1);
		printf("º");
	}
	gotoxy(x,y+l);
	printf("È");
	gotoxy(x+1,y+l);
	for(i=0;i<b+2;i++)
	printf("Í");
	printf("¼");
	for(i=1;i<l;i++)
	{
		gotoxy(x+b+3,y+i);
		printf("º");
	}
}
float com(float u,int i)
{
	int j;
	float x=1.0;
	for(j=0;j<i;j++)
	x*=u-j;
	x/=fact(i);
	return x;
}
float fact(int i)
{
	int f=1,j;
	for(j=1;j<=i;j++)
	f*=j;
	return f;
}