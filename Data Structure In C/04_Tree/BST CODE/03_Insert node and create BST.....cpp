#include<stdio.h>
#include<malloc.h>

struct node 
{
	int data;
	struct node *left;
	struct node *right;
}*root= NULL;

void insert(int key)
{
	struct node *p =root;
	struct node *q,*t;
	if(root ==0)
	{
	p= (struct node *)malloc(sizeof(struct node ));
	p->data= key;
	p->left= p->right= NULL;
	root =p;
	return ;	
	}
	while(p!=0)
	{
		q=p;
		if(key<p->data)
		p=p->left;
	  else if(key>p->data)
		p=p->right;
		
		else 
		return ;
	}

	//struct node *t;
	t= (struct node*)malloc(sizeof(struct node ));
	t->data= key;
	t->left = t->right= NULL;
	if(key<q->data)
	q->left=t;
	else 
	q->right=t;



}


//  in-order
void inorder(struct node *p)
{
	if(p)
	{
		inorder(p->left);
		printf(" Nodes: %d\n", p->data);
		inorder(p->right);
	}
}

// count.............
int count(struct node *p)
{
	int x, y;
	if(p!=0)
	{
		x= count(p->left);
		y= count(p->right);
		return x+y+1;
		
	}
	return 0;
}

// sum................
int sum(struct node *p)
{
	int x, y;
	if(p!=0)
	{
		x= sum(p->left);
		y= sum(p->right);
		return x+y+p->data;
		
	}
	return 0;
}


int main()
{
insert(70);               //    [70]
insert(50);              //     /  \
insert(10);	            //    [50] [100]     [THIS IS MY BST]   :)
insert(40);             //    /
insert(5);             //   [10]
insert(100);           //     \
                      //     [40]
                      //      /
                      //     [5]

inorder(root);
printf(" \n");

printf("The nodes are: %d\n",count(root));
printf("The node sum: %d\n",sum(root));


	
}
