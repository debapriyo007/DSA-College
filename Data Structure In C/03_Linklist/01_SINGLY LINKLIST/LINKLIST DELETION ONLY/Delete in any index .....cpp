

//DELETION MIDDLE OR YOU CAN SAY GIVEN INDEX


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

 struct Node* DeleteAtindex (struct Node *head,int index)
 
{
	struct Node*p=head;
	struct Node *q=head->next;
	for(int i=0;i<index-1;i++)
	{
		p=p->next;
		q=q->next;
		
	}
	p->next=q->next;
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
    head= DeleteAtindex(head,2); // this not use for index 0 
    printf(" befor delete the node:\n ");
	Display(head);
	return 0;
	
	
}
