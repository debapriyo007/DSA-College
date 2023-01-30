#include<stdio.h>
#include<stdlib.h>


//print array

void printArray(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}

//swap fun

void swap(int *x, int *y)
{
    int tem = *x;
    *x=*y;
    *y=tem ;

}


//bubble sort

void bubbleSort(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
               swap(&arr[j], &arr[j+1]);
            }
        }
    }
}


int main()
{

int arr[]={332,2,23,36,262,3};
int size =  sizeof(arr)/ sizeof(int);
printf("The array is:--->\n");
printArray(arr, size);

printf("After performing the the bubble sort:-->\n");
bubbleSort(arr, size);
printArray(arr, size);

return 0;
}