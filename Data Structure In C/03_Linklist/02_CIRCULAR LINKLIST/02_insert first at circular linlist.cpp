

// PERFORM  INSERT AT FIRST CIRCULARLINKLIST....................

#include<stdio.h>
#include<stdlib.h>
 
 
 struct Node
 {
 int data;
 struct Node *next;
 	
 };
 
 struct Node* display(struct Node*head)
 {
 	
 	struct Node*p=head;
 	do{
 		printf("element: %d\n",p->data);
 		p=p->next;
	 }
	 while(p!=head);
 }
 
 struct Node*insertAtfirst(struct Node *head, int x)
 {
 	struct Node *p=head;
 	struct Node *t;
 	t=(struct Node* )malloc(sizeof(struct Node));
 	t->data=x;
 	t->next =head;
 	while(p->next!=head)
 	{
 		p=p->next;
	 }
	 p->next=t;
	 head=t;
	 
 	return head;
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
 	fourth->next = head;
 	
 
 	
 	
 		head=insertAtfirst(head,69);
		 
		 display(head);
 }
