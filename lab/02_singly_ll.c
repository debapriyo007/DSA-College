#include <stdio.h>
#include <stdlib.h>

// creating node ...

struct node
{
    int data;
    struct node *next;
};

//display

void display(struct node *p)
{
    while(p!=0)
    {
        printf(" %d ", p->data);
        p=p->next;
    }
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 33;
    third->next = fourth;

    fourth->data = 990;
    fourth->next = NULL;


    printf("The singly linklist is:--->\n");
    display(head);

    return 0;
}