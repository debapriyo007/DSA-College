#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};


//DISPLAY
    void display(struct Node *p)
            {
            	while(p!=0)
            	{
				
				printf("element: %d\n",p->data);
            	//printf("address: %d\n",p->next);
				p=p->next;
                
				}
			}
			
			
			
struct Node *reverse(struct Node*head)
{
	struct Node *p=head;
	struct Node*q= NULL;
	struct Node *t;
	
	while(p!=0)
	{
		t= p->next;
		p->next=q;
		q=p;
		p=t;
	}
	return q;
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
	
	head->data=100;
	head->next=second;
	
	second->data=47;
	second->next=third;
	
	third->data=87;
	third->next=fourth;
	
	fourth->data=11;
	fourth->next=fifth;
	
	fifth->data=32;
	fifth->next=NULL;
	
	
	head =reverse(head);
	display(head);
}
		
