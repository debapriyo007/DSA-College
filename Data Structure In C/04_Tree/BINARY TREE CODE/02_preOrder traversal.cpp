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
// PRE-ORDER TRAVERSAL IS-----
void preOrder(struct node *t)
{
	if(t!=0)
	{
		printf(" %d\n", t->data);
		preOrder(t->left);
		preOrder(t->right);
	}
}

// IN-ORDER TRAVERSAL........
void InOrder(struct node *t)
{
	if(t!=0)
	{
		
	    InOrder(t->left);
		printf(" %d\n", t->data);
		InOrder(t->right);
	}
}


void PostOrder(struct node *t)
{
	if(t!=0)
	{
		
	    PostOrder(t->left);
		
		PostOrder(t->right);
		printf(" %d\n", t->data);
	}
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
	
	printf(" Pre-Order Traversal is:-->\n");
    preOrder(p);
    printf(" In-Order Traversal is:-->\n");
    InOrder(p);
    printf(" Post-Order Traversal is:-->\n");
    PostOrder(p);
    
	return 0;
}
