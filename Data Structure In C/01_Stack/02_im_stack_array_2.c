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

    printf("poped %d from the stack \n", pop(p));
    printf("poped %d from the stack \n", pop(p));
    printf("poped %d from the stack \n", pop(p));
    printf("poped %d from the stack \n", pop(p));
    printf("poped %d from the stack \n", pop(p));
    printf("poped %d from the stack \n", pop(p));

    printf("After pusing,Full:%d\n", isFull(p));
    printf("After pusing,Empty:%d\n", isEmpty(p));

    return 0;
}