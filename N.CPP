#include<stdio.h>
#include<conio.h>
#define maxval 10
#define counter 11
void main()
{clrscr();
float value[maxval];
int i,low,high;
int group[counter]={0,0,0,0,0,0,0,0,0,0,0};
for(i=0;i<maxval;i++)
{ scanf("%f",&value[i]);
++group[(int)(value[i]/10)];
}
printf("\n Group    Range    Frequency\n\n");
for(i=0;i<counter;i++)
{ low=i*10;
if(i==10)
  high=100;
else  high=low+9;
printf("\n %2d  %3d  to %3d %d\n",i+1,low,high,group[i]);
}
getch();
}

