#include<stdio.h>
#include<stdlib.h>

struct Node
{
	struct Node *prev;
	int data;
	struct Node *next;
};

struct Node *display(struct Node *head)
{
	struct Node *p=head;
	while(p!=0)
	{
		printf("element :%d\n ",p->data);
		p=p->next;
		
	}
}

struct Node *insertAtindex(struct Node*head,int x, int index)
{
	struct Node*p =head;
	struct Node*t=new Node;
	t->data=x;
	for(int i=0;i<index-1;i++)
	{
		p=p->next;
	}
	t->next=p->next;
	t->prev=p;
	p->next=t;
	p->next->prev=t;
	
	return head;
}
int main()
{
	struct Node *head;
	struct Node *second;
	struct Node *third;
	struct Node *fourth;
	
	head=(struct Node*)malloc(sizeof(struct Node));
	second=(struct Node*)malloc(sizeof(struct Node));
	third=(struct Node*)malloc(sizeof(struct Node));
	fourth=(struct Node*)malloc(sizeof(struct Node));
	
	
	head->prev= NULL;
	head->data=96;
	head->next=second;
	
	second->prev=head;
	second->data=77;
	second->next=third;
	
	third->prev=second;
	third->data=37;
	third->next=fourth;
	
	
	fourth->prev= third;
	fourth->data=57;
	fourth->next=NULL;
	
head =insertAtindex(head,14,3);
	display(head);
}
