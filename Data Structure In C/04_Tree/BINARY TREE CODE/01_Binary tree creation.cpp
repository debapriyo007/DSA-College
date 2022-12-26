#include<stdio.h>
#include<malloc.h>

struct node
{
	struct node *left;
	int data;
	struct node *right;
	
};

struct node * create(int x)
{
	struct node *n;
	n=(struct node *)malloc(sizeof(struct node));
	n->data=x;
	n->left=NULL;
	n->right=NULL;
	
	return n;
	
}

int main()
{
	struct node*p= create(20);
    struct node*p1= create(10);
	struct node*p2= create(70);
	struct node*p3= create(3);
	struct node*p4= create(21);	
	
	p->left=p1;
	p->right=p2;
	p1->left=p3;
	p2->right=p4;
	
	return 0;
}
