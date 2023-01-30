#include <stdio.h>
#include <stdlib.h>
struct node
{
    int expo;
    int coeff;
    struct node *next;
};
struct node *head3 = NULL;
struct node *tail3 = NULL;
struct node *tail = NULL;
struct node *create(struct node *head, int expo, int coeff)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->expo = expo;
    newnode->coeff = coeff;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = tail = newnode;
        return head;
    }
    else
    {
        tail->next = newnode;
        tail = newnode;
        return head;
    }
}
void Display(struct node *p3)
{
    while (p3 != NULL)
    {
        if (p3->next != NULL)
        {
            printf("(%dx^%d) + ", p3->coeff, p3->expo);
            p3 = p3->next;
        }
        else
        {
            printf("(%dx^%d) \n\n ", p3->coeff, p3->expo);
            p3 = p3->next;
        }
    }
}
void append(int expo, int coeff)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->coeff = coeff;
    newnode->expo = expo;
    newnode->next = NULL;
    if (head3 == NULL)
    {
        head3 = tail3 = newnode;
        return;
    }
    tail3->next = newnode;
    tail3 = newnode;
    return;
}
void add_polynomial(struct node *p1, struct node *p2)
{
    if (p1 == NULL && p2 == NULL)
    {
        printf("There are no polynomial equation !!");
        return;
    }
    while (p1 != NULL && p2 != NULL)
    {
        // when p1 exponent is greater than p2 exponent
        if (p1->expo > p2->expo)
        {
            append(p1->expo, p1->coeff);
            p1 = p1->next;
        }
        // when p2 exponent is greater than p1 exponent
        if (p2->expo > p1->expo)
        {
            append(p2->expo, p2->coeff);
            p2 = p2->next;
        }
        // if both the exponent are same
        if (p2->expo == p1->expo)
        {
            append(p2->expo, p2->coeff + p1->coeff);
            p1 = p1->next;
            p2 = p2->next;
        }
    }

    while (p1 != NULL)
    {
        append(p1->expo, p1->coeff);
        p1 = p1->next;
    }
    while (p2 != NULL)
    {
        append(p2->expo, p2->coeff);
        p2 = p2->next;
    }
}

int main()
{
    // head1
    struct node *head1 = (struct node *)malloc(sizeof(struct node));
    head1 = NULL;
    struct node *newhead1 = create(head1, 3, 2);
    create(newhead1, 2, 1);
    create(newhead1, 0, 9);
    printf("First Polynomial - ");
    Display(newhead1);
    // head2
    struct node *head2 = (struct node *)malloc(sizeof(struct node));
    head2 = NULL;
    struct node *newhead2 = create(head2, 2, 4);
    create(newhead2, 1, 1);
    create(newhead2, 0, 4);
    printf("second Polynomial - ");
    Display(newhead2);

    add_polynomial(newhead1, newhead2);
    printf("Resultant Polynomial - ");
    Display(head3);
    return 0;
}
