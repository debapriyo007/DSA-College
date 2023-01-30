#include <stdio.h>
#include <stdlib.h>

// define node

struct node
{
    int data;
    struct node *next;
};

// create function

struct node *createNode(int x)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = x;
    n->next = NULL;

    return n;
}

// display

void display(struct node *p)
{
    while (p)
    {
        printf(" %d ", p->data);
        p = p->next;
    }
    printf("\n");
}

void sortPos(struct node *head, int x)
{
    struct node *p = head;
    struct node *q = NULL;

    struct node *t = createNode(x);

    while (p != 0 && p->data < x)
    {

        q = p;
        p = p->next;
    }
    t->next = q->next;
    q->next = t;
}

int main()
{

    struct node *head = createNode(3);
    struct node *second = createNode(7);
    struct node *third = createNode(9);
    struct node *fourth = createNode(15);
    struct node *five = createNode(20);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = five;
    printf("The linkList is:--->\n");
    display(head);
    sortPos(head, 10);
    display(head);

    return 0;
}