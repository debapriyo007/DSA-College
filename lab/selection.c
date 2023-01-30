#include <stdio.h>
#include <stdlib.h>

// print array...

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}

// swap

void swap(int *x, int *y)
{
    int tem = *x;
    *x = *y;
    *y = tem;
}

/// selection sort..

void selectioSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        swap(&arr[min], &arr[i]);
        // int tem = arr[min];
        // arr[min] = arr[i];
        // arr[i]=tem;
    }
}

// insertion sort....

void insertion_sort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int x = arr[i];
        int j = i - 1;
        while (j > -1 && arr[j] > x)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = x;
    }
}

int main()
{

    int arr[] = {700, 54, 21, 33, 64, 6, 62};
    int size = sizeof(arr) / sizeof(int);
    printf("The array is:--->\n");
    printArray(arr, size);
    selectioSort(arr, size);
    printf("After performing selection sort-->\n");
    printArray(arr, size);

    return 0;
}