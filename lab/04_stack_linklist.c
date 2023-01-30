#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *top = NULL;

void push(int x)
{
    struct node *t;
    t = (struct node *)malloc(sizeof(struct node));
    if (t == NULL)
    {
        printf("The stack is Overflow!!\n");
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int pop()
{
    struct node *p = top;
    int x=-1;
    if (top == NULL)
    {
        printf("The stack is Underflow!!\n");
    }
    else
    {
        top = top->next;
        x = p->data;
        free(p);
    }
    return x;
}

void display()
{
    struct node *p = top;
    while (p != 0)
    {
        printf("     %d\n", p->data);
        p = p->next;
    }
}

int main()
{
    printf("The element in the stack are:\n");
    push(10);
    push(1550);
    push(1220);
    display();
    printf("\nPoped element is %d form the stack.\n", pop());
    printf("\nPoped element is %d form the stack.\n", pop());
    printf("\nPoped element is %d form the stack.\n", pop());
    printf("\nPoped element is %d form the stack.\n", pop());
    display();
}