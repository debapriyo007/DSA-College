#include <stdio.h>

// Binary search recursion function.......


int printAraay(int arr[], int start, int end, int size, int key)
{
    if (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] > key)
        {
            return printAraay(arr, start = mid + 1, end, size, key);
        }
        else
        {
            return printAraay(arr, start, end = mid - 1, size, key);
        }
    }
    return -1;
}

int main()
{
    int arr[] = {12, 1, 2, 55, 66, 335, 88, 12};
    int size = sizeof(arr) / sizeof(int);
    int key = 55;
    int index = printAraay(arr, 0, size - 1, size, key);

    if (index == -1)
    {
        printf("The key is not found!!");
    }

    else
    {
        printf("The key %d is found at index %d ", key,index);
    }
    return 0;
}