#include <stdio.h>
#include <stdlib.h>

// struct of  a node..

struct node
{
    int data;
    struct node *next;
};

// create a fun...
struct node *createNode(int x)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = x;
    p->next = NULL;
    return p;
}

// dispalay fun..
void display(struct node *p)
{
    while (p != 0)
    {
        printf(" %d ", p->data);
        p = p->next;
    }
    printf("\n");
}

struct node *serach(struct node *p, int key)
{
    while (p != 0)
    {
        if (key == p->data)
            return p;
        p = p->next;
    }
    return NULL;
}

int main()
{
    struct node *tem;
    struct node *head = createNode(21);
    struct node *second = createNode(35);
    struct node *third = createNode(66);
    struct node *fourth = createNode(71);

    head->next = second;
    second->next = third;
    third->next = fourth;

    printf("The linklist is:--->\n");
    display(head);

    tem = serach(head, 71);
    if (tem)
        printf("The key  %d  is  found ..\n", tem->data);
    else
        printf("Key is not found\n");

    return 0;
}