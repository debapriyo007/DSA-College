#include<stdio.h>

 void printarray(int* A,int n)
{
  for( int i=0;i<n;i++)
  {
  printf("ELEMENTS: %d\n",A[i]);
  }
  printf("\n");

}

void Bubble_sort(int* A, int n)
{
    int tem;
    int flag;
    for(int i=0;i<n-1;i++)
    {
        flag =0;
        printf(" Working time of passes : %d\n",i+1);
        for(int j=0;j<n-1-i;j++)
        {
            if(A[j]>A[j+1])
            {
              tem =A[j];
              A[j]=A[j+1];
              A[j+1]=tem;
              flag=1;
               
            }
        }
        if(flag==0){
            break;
        }
    }
}

int main()
{
    int A[]={47,55,88,3,4,77,10};
    //int A[]={1,2,3,4,5,6,7};
     int n=7;
    printarray(A,n);
    Bubble_sort(A,n);
    printf(" After perform Bubble sort:->\n");
    printarray(A,n);
    return 0;
}