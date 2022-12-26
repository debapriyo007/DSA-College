// perform Traversal , display , count how much node, sum of elmement in the node , max ,min in linklist...
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
		
		
		//COUNT HOW MANY NODES IN THE LINKLIST	
int count(struct Node*p)
{
	int x=0;
while(p!=NULL)
{
	x++;
	p=p->next;
}
return (x);
}


// SUM THE ELEMENT 
int add(struct Node *p)
{
	int sum=0;
	while(p!=0)
	{
		sum=sum+p->data;
		p=p->next;
	}
	return (sum);
			}	


// MAX ELEMENT IN THE LINKLIST			
int max(Node*p)
{
	int MIN_INT;
	int m =MIN_INT;
	while(p)
	{
		if(p->data>m)
		m=p->data;
		p=p->next;
	}
	return(m);
					}	


//MIN ELEMENT IN THE LINKLIST
					
int min(struct Node *p)
{
	int MAX_INT;
	int s=MAX_INT;
	while(p)
	{
		if(p->data<s)
		s=p->data;
		p=p->next;
	}
	return (s);
					}	
					
Node* Search(Node*p)
{
	int key= 47;
	while(p!=0)
	{
		if(key=p->data)
		{
			
			p=p->next;
			printf(" iteam found");
		}
		else
		{
			printf(" not found");
			
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
	 
	display(head); 
	printf("\n number of node : %d",count(head));
	printf("\n sum of element is: %d\n",add(head));
	printf("\n max value in the linklist :  %d",max(head));
	printf("\n min value in the linklist : %d",min(head));
	return 0;
				}			
