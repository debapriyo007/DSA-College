#include <stdio.h>
#include <stdlib.h>

// SWAP FUNCTION...
void swap(int *x, int *y)
{
    int tem = *x;
    *x = *y;
    *y = tem;
}

void print_array(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Elements: %d\n", A[i]);
    }
    printf("\n");
}

// PARTITION FUN...
int partition(int A[], int l, int h)
{
    int pivot = A[l];
    int i = l, j = h;

    do
    {
        do
        {
            i++;
        } while (A[i] <= pivot);
        do
        {
            j--;
        } while (A[j] > pivot);

        if (i < j)
            swap(&A[i], &A[j]);
    } while (i < j);

    swap(&A[l], &A[j]);
    return j;
}

// Quick sort fun ....
void Quick_sort(int A[], int l, int h)
{
    int j;
    if (l < h)
    {
        j = partition(A, l, h);
        Quick_sort(A, l, j);
        Quick_sort(A, j + 1, h);
    }
}

int main()
{
    int A[] = {55, 88, 1, 4, 7, 44, 10, 22, __INT32_MAX__};
    int n = 9;
    
    print_array(A,n);    
    printf("After performing Quick sort:--->\n");
    Quick_sort(A, 0, n - 1);
    print_array(A,n);
    return 0;
}