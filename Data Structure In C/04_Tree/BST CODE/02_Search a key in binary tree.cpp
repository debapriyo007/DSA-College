#include<stdio.h>
#include<malloc.h>

struct node
{
	struct node *left;
	int data;
	
	struct node *right;
};

node * create(int x)

{
struct node *n;
n =(struct node *)malloc(sizeof(struct node));
n->data= x;
n->left=NULL;
n->right=NULL;

 return n;	
}

struct node*search(struct node *t, int key)    
{
	while(t!=0)
	{
		if(key == t->data)
		return t;
	    
		else if(key<t->data)
	    t=t->left;
	    
		else
		t=t->right;
	    
	}
	return NULL;
}

// THIS IS THE RECURSIVE METHORD............

/*struct node*search(struct node *t, int key)
{
if(t== NULL)
{
	return NULL;
}
if(key == t->data)
{
	return t;
}
else if(key<t->data)
{
	return search(t->left,key);
	
}
else
{
	return search(t->right,key);
}

	
}*/

void Inorder(struct node *p)
{
	if(p!=0)
	{
	 Inorder(p->left);
	 printf(" %d\n", p->data);
	 Inorder(p->right);
	}
}
 void Insert(struct node *t, int key)
 {
 struct node *r= NULL;
 //struct node *p;
 while(t!=0)
 {
  r=t;
  if(key == t->data){
  
  printf("can't insert %d already in BST\n ",key);
  return ;
}
  else if(key<t->data)
  t=t->left;
  else
  t=t->right;
  
  	
 }
 struct node *p =create(key);
 p->left=p->right=NULL;
 if(p->data<r->data)
 r->left=p;
 else
 r->right=p;	
 }

int main()
{
struct node *tem;
	struct node *p= create(30);
	struct node *p1= create(20);
	struct node *p2= create(10);
	struct node *p3= create(25);
	struct node *p4= create(40);
	struct node *p5= create(35);
	struct node *p6= create(50);
	
	p->left=p1;
	p1->left=p2;
	p1->right=p3;
	p->right=p4;
	p4->left=p5;
	p4->right=p6;
	
	tem = search(p,55);
	if(tem!=0)
	{
		printf(" key found: %d\n", tem->data);
		
	}
	else
	{
	printf(" key  not found: %d\n");	
	}
	
	Inorder(p);
    printf(" __________________________\n");
   
  Insert(p,38);
  //printf("%d",p->right->left->right->data); 
Inorder(p);	
	
	return 0;
}
