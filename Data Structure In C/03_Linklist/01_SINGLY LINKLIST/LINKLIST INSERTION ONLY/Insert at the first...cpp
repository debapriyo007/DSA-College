#include<stdio.h>
#include<stdlib.h>
 
 
 struct Node
 {
 int data;
 struct Node *next;
 	
 }*head;
 
 void display(struct Node*p)
 
 {
 while(p!=0)
 {
 	printf(" %d   ", p->data);
 	p=p->next;
	 }	
 }
 
struct Node* insertAtfirst(struct Node*head, int x)
{
	struct Node*t= (struct Node*)malloc(sizeof(struct Node));
	t->next=head;
	t->data=x;
	return t;
}
 
 
 int main()
 {
 	
	 //struct Node*temp; 
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
 	
 
 	
 	
 		printf("\n after insert linklist \n");
		 display(head);
		 head=insertAtfirst(head,47);
		 	//head=insertAtfirst(head,470);
		 	printf("\n befor insert linklist \n");
		 display(head);
 }
