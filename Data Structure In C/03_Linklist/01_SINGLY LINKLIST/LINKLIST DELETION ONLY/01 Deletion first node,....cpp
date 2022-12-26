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

 struct Node* Delete (struct Node *head)
 
{
	struct Node*p=head;
	head=head->next;
	
	free(p);
	
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
	
	
head= Delete(head);

	Display(head);
	return 0;
	
	
}
