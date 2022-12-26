#include<stdio.h>
#include<stdlib.h>

void print_aray(int * A, int n)
{
 for(int i=0; i<n; i++)
 {
  printf("%d\n", A[i]);

 }
 printf("\n");
}


void Swap(int *x, int *y)
{
     int tem=*x;
     *x=*y;
     *y=tem; 
}

void selection_sort(int*A, int n)
{
    int i,j,k;
    for(i=0;i<n -1 ;i++)
    {
        for(j=k=i;j<n; j++)
        {
            if(A[j]<A[k])
            k=j;
        }
        Swap(&A[i],&A[k]);
    }
}

int main()
{
 int A[]={552,66,55,22,3,};
int n=5;
print_aray(A,n);
printf(" After performing selection sort:-->\n");
selection_sort(A,n);
print_aray(A,n);


return 0;
}