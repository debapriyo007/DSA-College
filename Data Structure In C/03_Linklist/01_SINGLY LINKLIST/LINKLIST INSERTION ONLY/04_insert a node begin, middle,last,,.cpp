
#include<stdio.h>
#include<stdlib.h>

struct Node
{
int data;
struct Node *next;	
}*head;

void display(struct Node *p)
{
	while(p!=0)
	{
		printf("%   d",p->data);
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


void Insert(struct Node *p,int index,int x)
{
	struct Node*t;
	int i;
	if(index<0 || index> count(p))
	return;
	t= (struct Node*)malloc(sizeof(struct Node));
	t->data=x;
	
	if(index == 0)
	{
		t->next=head;
		head=t;
	}
	else
	{
		for(i=0;i<index-1;i++)
		p=p->next;
		t->next=p->next;
		p->next=t;
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

Insert(head,0,99);
display(head);
//printf("\n NO OF NODES ARE: %d",count(head));
return 0;

}
