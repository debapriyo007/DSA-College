#include <stdio.h>

// print arr..
void print_arr(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

//linear search fun

int linearSearch(int arr[], int size, int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i] == key)
        {
          return i ;
          
        }
    }
    return -1;
}

int main()
{
    int arr[] = {12, 1, 2, 55, 66, 335, 88, 12};
    int size = sizeof(arr) / sizeof(int);
    int key =55;
    printf("The array is:--->\n");
    print_arr(arr, size);
    int index = linearSearch(arr, size, key);
    if(index == -1)
    {
        printf("The key is not found!!");
    }
    else{
        printf("The key %d found at index %d", key,index);
    }

    return 0;
}