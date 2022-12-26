#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node*next;
}*head;

void Display(struct Node*p)
{
	while(p!=0)
	{
		printf(" element :  %d\n",p->data);
		p=p->next;
	}
}

struct Node*insertAtEnd(struct Node*head,int x)
{
	struct Node*p= head;
	struct Node*t;
	t=(struct Node*)malloc(sizeof(struct Node));
	t->data=x;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=t;
	t->next=NULL;
	return head;
}



int main()
{
	struct Node*temp;
	
	struct Node*head;
	
	struct Node*second;
	
	struct Node*third;
	
	head=(struct Node*)malloc(sizeof(struct Node));
	second=(struct Node*)malloc(sizeof(struct Node));
	third=(struct Node*)malloc(sizeof(struct Node));
	
	head->data=47;
	head->next=second;
	
	second->data=20;
	second->next=third;
	
	third->data=80;
	third->next=NULL;
	
	
printf("\n befor insertion\n");
	Display(head);
	head=insertAtEnd(head,2);
	printf("\n after insertion\n");
		Display(head);
	return 0;
	
	
}
