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
 
 
 struct Node* insertAtindex(struct Node*head, int index,int x)
 {
 	struct Node*p=head;
 	struct Node*q;
 	q=(struct Node*)malloc(sizeof(struct Node));
 	q->data=x;
 	int i;
 	while( i!=index-1)
 	{
 		p=p->next;
 		i++;
 		
	 }
	 q->next=p->next;
	 p->next=q;
	 
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
 	
	printf(" Insert after circular linklist:\n");
 	
	display(head);
 
 	printf(" Insertbefor linklist:\n");
 
 	head= insertAtindex(head, 2,77);
		 
	display(head);
 }
