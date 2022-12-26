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

 struct Node* DeleteAtlast (struct Node *head)
 
{
	struct Node*p=head;
	struct Node*q=head->next;
	
	while(q->next!=0)
	
	{
	p=p->next;
	q=q->next;	
	}
	p->next=NULL;
	
	free(q);
	
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
	
	



		printf(" after delete the node:\n ");
	Display(head);
    head= DeleteAtlast(head); 
    printf(" befor delete the node:\n ");
    Display(head);
	return 0;
	
	
}
