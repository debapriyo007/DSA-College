#include<stdio.h>

void print_arary(int*A, int n)
{
  for(int i=0; i<n; i++)
{
   printf("elements : %d\n", A[i]);

}
printf("\n");
}

// insertion sort...............
void insertion_sort( int *A, int n)
{
    int i,j,x;
    for(i=1;i<n;i++)
    {
       printf(" Working time of passes : %d\n",i); 
        j=i-1;
        x=A[i];
        while(j> -1&& A[j]>x)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
    }
}

int main()
{
int A[]={44,55,5,1,66,7,8,69,};
//int A[]={1,2,3,4,5,6,7,8};
int n=8;
print_arary(A,n);
printf("After performing insertion short:--->\n");
insertion_sort(A,n);
print_arary(A,n);
return 0;
}