#include<stdio.h>
#include<malloc.h>

struct node
{
	struct node *left;
	int data;
	struct node *right;
	
};

struct node *create(int x)
{
	struct node *n;
	n=new node;
	
	n->left= NULL;
	n->right= NULL;
	n->data=x;
	return n;
}
// perform InOrder Traversal...................

void inorderTraversal(struct node *p)
{
	if(p!=0)
	{
		inorderTraversal(p->left);
		printf("%d\n", p->data);
		inorderTraversal(p->right);
	}
}

// perform serach...............

struct node * search(struct node *p, int key)
{
	while(p!=0)
	{
		if(key== p->data)
		return p;
	    
		else if(key<p->data)
		p=p->left;
	   
		else
		p=p->right;
	    
	}
	return NULL;
}

// perform insertion ...........

void  Insert(struct node *p, int key)
{
	struct node *q= NULL;
	while(p!=0)
	{
		q=p;
		if(key== p->data)
		{
			printf("The key %d already in  the BST!!!!!\n", key);
			return ;
		}
	    
		else if(key<p->data)
		p=p->left;
	   
		else
		p=p->right;
	}
	struct node *r;
	r= new node;
	r->data=key;
	r->left=r->right= NULL;
	if(r->data<q->data)
	q->left =r;
	else
	q->right=r;
	
	
	
}

// perform the deletion...........

struct node *inordeprodessor(struct node *p)
{
	p=p->left;
	while(p->right!=0)
	{ 
	p=p->right;
	}
	return p;
}

struct node *deleteNode(struct node *p, int key)
{
	struct node *ipre;
	if(p==0)
	{
		return p;
	}
	if(p->left==0 && p->right==0)
	{
		free(p);
		return 0;
		
	}
	if(key< p->data)
	{
		p->left=deleteNode(p->left, key);
		
	}
	else if(key> p->data)
	{
		p->right=deleteNode(p->right, key);
		
	}
	
	else
	{
	ipre= inordeprodessor(p);
	p->data=ipre->data;
	p->left=deleteNode(p->left,ipre->data);	
	}
	
	return p;
}

int main()
{
	struct node *tem;
	struct node *p= create(70);
	struct node *p1= create(7);
	struct node *p2= create(100);
	struct node *p3= create(5);
	
	p->left=p1;
	p->right=p2;
	p1->left=p3;
	
	printf(" InOrder Traversal is :\n");
	inorderTraversal(p);
	
	tem =search(p,242427);
	if(tem)
	printf(" The key %d is found.\n", tem->data);
	else
	printf(" The key is not found!!\n");
	
	printf(" After  inserting InOrder Traversal is :\n");
	Insert(p,8);
	inorderTraversal(p);
	
	printf(" After  deleting InOrder Traversal is :\n");
	deleteNode(p,70);
	inorderTraversal(p);
	
}
