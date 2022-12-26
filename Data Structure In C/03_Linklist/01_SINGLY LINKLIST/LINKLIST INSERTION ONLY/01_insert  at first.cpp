

//INSERTION FIRST OF THE LINKLIST..........

#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node*next;
	
};

void Display(struct Node*p)
{
	while(p!=0)
	{
		printf(" %d  ",p->data);
		p=p->next;
	}
}

Node* insertAtfirst(struct Node*head,int x)
{
	struct Node*t;
	t=(struct Node*)malloc(sizeof(struct Node));
	t->data=x;
	t->next=head;
	head=t;
	return t;
}

int main()
 {
 	
	
	struct Node*head;
 	struct Node*second;
 	struct Node*third;
 	struct Node*fourth;
 	
 	head= (struct Node*)malloc(sizeof(struct Node));
 	second= (struct Node*)malloc(sizeof(struct Node));
 	third= (struct Node*)malloc(sizeof(struct Node));
 	fourth= (struct Node*)malloc(sizeof(struct Node));
 	
 	head->data=14;
 	head->next=second;
 	
 	second->data=85;
 	second->next=third;
 	
 	third->data=55;
 	third->next=fourth;
 	
 	fourth->data=99;
 	fourth->next = NULL;
 	
 	head=insertAtfirst(head,11);
	 
	 Display(head);
 	
 	
 	
 
 }
