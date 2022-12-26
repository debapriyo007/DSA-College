#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *s;
};
void create(struct stack *p)
{
    printf("Enter the size of the stack:\n");
    scanf("%d", &p->size);
    p->top = -1;
    p->s = (int *)malloc(p->size * sizeof(int));
}

void display(struct stack *p)
{

    int i;
    for (i = p->top; i >= 0; i--)
        printf("%d", p->s[i]);
    printf("\n");
}

void push(struct stack *p, int x)
{
    if (p->top == p->size - 1)
    {
        printf("The stack is Overflow!!");
    }
    else
    {
        p->top++;
        p->s[p->top] = x;
    }
}

int pop(struct stack *p)
{
    int x = -1;
    if (p->top == -1)
    {
        printf("The stack is Underflow!!\n");
    }
    else
    {
        p->s[p->top--];
    }
    return x;
}

int main()
{


    struct stack *p;
    create(&p);

    push(&p,10);
    push(&p,80);
    push(&p,50);
    push(&p,40);

    display(p);
    
}