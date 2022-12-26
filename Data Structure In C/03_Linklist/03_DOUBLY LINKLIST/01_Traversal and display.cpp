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
	head->data=6;
	head->next=second;
	
	second->prev=head;
	second->data=9;
	second->next=third;
	
	third->prev=second;
	third->data=3;
	third->next=fourth;
	
	
	fourth->prev= third;
	fourth->data=7;
	fourth->next=NULL;
	

	display(head);
}
