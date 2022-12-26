#include <stdio.h>
#include <stdlib.h>
// structure of array
struct stack
{
    int size;
    int top;
    int *arr;
};

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
        return 0;
}

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
        return 0;
}

void push(struct stack *p, int x)
{
    if (isFull(p))
    {
        printf("The stack is Overflow!!\n");
    }
    else
    {
        p->top++;
        p->arr[p->top] = x;
    }
}

int pop(struct stack *p)
{
    if (isEmpty(p))
    {
        printf("The stack is Underflow!!\n");
    }
    else
    {
        int x = p->arr[p->top];
        p->top--;
        return x;
    }
}


int peek(struct stack *p, int pos)  // last index should be the first position ....
{
    int arrayInd= p->top-pos+1;
    if(arrayInd<0)
    {
        printf("Not at valid pos for the stack \n");
    }
    else
    {
        return p->arr[arrayInd];
    }
}
int main()
{
    struct stack *p = (struct stack *)malloc(sizeof(struct stack));
    p->size = 5;
    p->top = -1;
    p->arr = (int *)malloc(p->size * sizeof(int));
    // printf("stack create successfully");
    printf("Befor pusing,Full:%d\n", isFull(p));
    printf("Befor pusing,Empty:%d\n", isEmpty(p));

    push(p, 44);
    push(p, 55);
    push(p, 34);
    push(p, 6);
    push(p, 74);
    push(p, 99);

    // printing value from the stack

    for(int j=1; j<=p->top+1;j++)
    {
        printf("The value at the postition %d is %d\n", j, peek(p,j));
    }

    printf("After pusing,Full:%d\n", isFull(p));
    printf("After pusing,Empty:%d\n", isEmpty(p));

    return 0;
}