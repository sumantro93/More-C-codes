#include<stdio.h>
#include<conio.h>
void Merge(int * , int , int , int );
void MergeSort(int *array, int left, int right)
{
        int mid = (left+right)/2;
        if(left<right)
        {
                MergeSort(array,left,mid);
                MergeSort(array,mid+1,right);
                Merge(array,left,mid,right);
        }
}

void Merge(int *array, int left, int mid, int right)
{
        int tempArray[20],iter;
        int pos=0,lpos = left,rpos = mid + 1;
        while(lpos <= mid && rpos <= right)
        {
                if(array[lpos] < array[rpos])
                {
                        tempArray[pos++] = array[lpos++];
                }
                else
                {
                        tempArray[pos++] = array[rpos++];
                }
        }
        while(lpos <= mid)
            {
        		 tempArray[pos++] = array[lpos++];
            }
        while(rpos <= right)
            {
            tempArray[pos++] = array[rpos++];
            }
        for(iter = 0;iter < pos; iter++)
        {
                array[iter+left] = tempArray[iter];
        }
}
void main()
{
        int number_of_elements,array[20],iter;
        printf("enter the no of elements : ");
        scanf("%d",&number_of_elements);
        printf("enter the elements : ");
        for(iter = 0;iter < number_of_elements;iter++)
        {
                scanf("%d",&array[iter]);
        }
        MergeSort(array,0,number_of_elements-1);
        printf("the sorted array is : ");
        for(iter = 0;iter < number_of_elements;iter++)
        {
                printf("%d ",array[iter]);
        }
        printf("\n");
        getch();
}
