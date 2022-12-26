#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
}*head;

    void display(struct Node *p) // display the value and the address of the linklist
    
            {
            	while(p!=0)
            	{
				
				printf(" %d   ",p->data);
            	//printf("address: %d\n",p->next);
				p=p->next;
                
				}
			}
			
void insertSlinlist(struct Node*p,int x)
{
	
	struct Node*t,*q=NULL;
	t=(struct Node*)malloc(sizeof(struct Node));
	t->data=x;
	t->next=NULL;
	
	if(head==NULL)
	head=t;
	else
	{
		while(p && p->data<x)
	{
		q=p;
		p=p->next;
		
	}
	if(p==head)
	{
		t->next =head;
		head=t;
		
	}
	else
	{
		t->next=q->next;
		q->next =t;
	}
	}
	

}			


			
int main()
{
	struct Node *head;
	struct Node *second;
	struct Node *third;
	struct Node *fourth;
	struct Node *fifth;
	
	head=(struct Node*)malloc(sizeof(struct Node));
	second =(struct Node*)malloc(sizeof(struct Node));
	third=(struct Node*)malloc(sizeof(struct Node));
	fourth=(struct Node*)malloc(sizeof(struct Node));
	fifth=(struct Node*)malloc(sizeof(struct Node));
	
	head->data=3;
	head->next=second;
	
	second->data=7;
	second->next=third;
	
	third->data=9;
	third->next=fourth;
	
	fourth->data=15;
	fourth->next=fifth;
	
	fifth->data=20;
	fifth->next=NULL;
	 
	insertSlinlist(head,2);
	
	
	display(head); 
	
	
	
	return 0;
				}						
