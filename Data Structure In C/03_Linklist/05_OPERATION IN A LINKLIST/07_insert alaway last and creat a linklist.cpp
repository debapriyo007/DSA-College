#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node* next;
}*first;

void display(struct Node*p)
{
	while(p!=0)
	{
		printf("%d   ",p->data);
		p=p->next;
		
	}
}
 void insertlast(int x)
 {
 	struct Node *t=new Node;
	
	 struct Node *last;
 	
 	
 	//t= (struct Node*)malloc(sizeof(struct Node));
 	t->data=x;
 	t->next=NULL;	
 	if(first==NULL)
 	{
 	first=last=t;
	 	
	 }
	 else
	 {
	 	last->next=t;
	 	last=t;
	 }
 }
 
 int main()
 {
 	
 	insertlast(8);
 	insertlast(16);
 	insertlast(96);
 	insertlast(26);
	 
	 display(first);
	 return 0;
 }
