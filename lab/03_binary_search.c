#include <stdio.h>

// print function..

void print_arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}

// binary search ...

int binarySearch(int arr[], int size, int key)
{
    int start = 0, end = size - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{

    int arr[] = {77, 41, 2, 6, 36, 4};
    int size = sizeof(arr) / sizeof(int);
    int key = 36;
    printf("The array is--->:\n");
    print_arr(arr, size);

    int index = binarySearch(arr, size, key);
    if (index == -1)
    {
        printf("The key is not found!!");
    }
    else
    {
        printf("The key %d is found at index %d !", key, index);
    }

    return 0;
}