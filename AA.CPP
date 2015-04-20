#include <stdlib.h>
#include <stdio.h>
#include <values.h>
#include <time.h>

int main(void)
{
   int i,j;

      for(j=0;j<13;j++)
      {
     // randomize();
      for(i=0;i<23;i++)
	 printf("%d\n", rand() % MAXINT);
      }
   return 0;
}