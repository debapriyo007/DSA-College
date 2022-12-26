#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
	
}*head;

void display (struct Node*p)
  {
         while(p!=0)
		 {
		 	printf("element : %d\n",p->data);
		 	//printf("element : %d\n ",p->next);
		 	p=p->next;
		   }  
  
  }  
  




struct Node* search(struct Node *p,int key)
{
struct Node *q=NULL;
//struct  Node *head;
//head=(struct Node*)malloc(sizeof(struct Node));
	while(p!=0)
	{
		if(key==p->data)
		{
			q->next =p->next;
			p->next =head;
			head=p;
			return p;
		}
		
		q=p;
		p=p->next;
	}
	return 	NULL;
	
}
	

int main()
{
	
	struct Node *temp;
struct Node *head;
struct Node *second;
struct Node *third;
struct Node *fourth;

head= (struct Node*)malloc(sizeof(struct Node));
second= (struct Node*)malloc(sizeof(struct Node));
third= (struct Node*)malloc(sizeof(struct Node));
fourth= (struct Node*)malloc(sizeof(struct Node));

head->data=21;
head->next=second;

second->data =87;
second->next=third;

third->data=97;
third->next=fourth;

fourth->data=12;
fourth->next=NULL;




temp=search(head,97);

if(temp)
printf(" \n key is found .\nelement: %d\n",temp->data);
else
printf("key not found\n!!");
display(head);


return 0;
	
}	
	
