// perform Traversal and display in linklist
#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

    void display(struct Node *p) // display the value and the address of the linklist
    
            {
            	while(p!=0)
            	{
				
				printf("element: %d\n",p->data);
            	printf("address: %d\n",p->next);
				p=p->next;
                
				}
			}
			
int count(struct Node*p) // count how much node in the linnklist

{
	int x=0;
while(p!=NULL)
{
	x++;
	p=p->next;
}
return (x);
}

int add(struct Node *p)   // sum of element in the linklist

{
	int sum=0;
	while(p!=0)
	{
		sum=sum+p->data;
		p=p->next;
	}
	return (sum);
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
	
	head->data=10;
	head->next=second;
	
	second->data=47;
	second->next=third;
	
	third->data=87;
	third->next=fourth;
	
	fourth->data=11;
	fourth->next=fifth;
	
	fifth->data=32;
	fifth->next=NULL;
	 
	display(head); 
	printf("\n number of node : %d",count(head));
	printf("\n sum of element is: %d\n",add(head));
	return 0;
				}			
