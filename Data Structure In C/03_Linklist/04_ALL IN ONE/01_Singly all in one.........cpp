 // PERFORM ALL OPR IN LINKLIST(SINGLY) .........
 
 
 #include<stdio.h>
 #include<stdlib.h>
 
 struct Node 
 {
 	int data;
 	struct Node *next;
 	
 };

//DISPLAY AND TRAVERSAL........
 void Display(struct Node *p)
 {
 	while(p!=0)
 	{
 	printf("elements are: %d\n", p->data);
	 p=p->next;	
	}
 }
 
 // HOW MANY NODES ARE THERE........
 int count(struct Node *p)
 {
 	int c=0;
 	while(p!=0)
 	{
 		p=p->next;
 		c++;
	 }
	 return c;
 }
 
 // ADDATION OF ELEMENT IN A LINKLIST....
 int add (struct Node *p)
 {
 	int sum =0;
 	while(p!=0)
 	{
 		sum =sum+p->data;
 		p=p->next;
	 }
	 return (sum);
 }
 
 // MAXIMUM ELEM IN A LINKLIST............
 int Max_def(struct Node *p)
 {
 	  
	  int MIN_INT; 
	   int m= MIN_INT;
 	while(p!=0)
 	{
 		if(p->data> m)
 		m=p->data;
 		p=p->next;
	 }
	 return m;
 }
 
 // MIN ELEM IN A LIKLIST..........
 int min_def(struct Node*p)
 {
 int MAX_INT;
 int min=MAX_INT;
 
 while(p!=0)
 {
 if(p->data<min)
 min=p->data;
 p=p->next;
 	
 }
 return min;
}

// SEARCH KEY IN A LINKLIST.........

 //struct Node * search(struct Node*p,int key)
//{
	// while(p!=0)
	//{
	//	if(key==p->data)
	//	return p;
	//	p=p->next;
	//}
	//return NULL;
//


//FOUND THE KEY AND BRING INTO FIRST NODE............ 
struct Node*search(struct Node * head,int key)
{
	struct Node*p =head;
	struct Node*q= NULL;
	while(p!=0)
	{
		if(key==p->data)
		{
			q->next =p->next;
			p->next=head;
			head=p;
			return p;
		}
		q=p;
		p=p->next;
		
	}
	return NULL;
	
}

// INSERT AT FIRST ...
struct Node* insertAtfirst(struct Node*head, int x)
{
	struct Node*p =head;
	struct Node *t= new Node;
	t->data=x;
	t->next =p;
	head =t;
	return head;
}

// INSERT AT ANY INDEX.........EXCEPT 0
struct Node* insertAtindex(struct Node*head, int index, int x)
{
	struct Node *p =head;
	struct Node *t ;
	t=(struct Node *)malloc(sizeof(struct Node ));
	t->data=x;
	int i=0;
	for(i=0; i< index-1; i++)
	{
		p=p->next;
	}
	
	t->next=p->next;
	p->next =t;
	
	return head;
}


// INSERT AT LAST......
struct Node *insertAtlast(struct Node *head, int x)
{
	struct Node*p=head;
	struct Node * t;
	t=(struct Node *)malloc(sizeof(struct Node ));
	t->data=x;
	while(p->next!=0)
	{
		p=p->next;
		
	}
	p->next =t;
	t->next =NULL;
	return head;
}


// DELETE FIRST NODE........
struct Node*delfirst(struct Node *head)
{
	struct Node*p=head;
	head=head->next;
	free(p);
	return head;
}

//DELETE AT ANY INDEX........
struct Node *delAtindex(struct Node*head, int index)
{
	struct Node *p=head;
	struct Node *q=p->next;
	int i=0;
	for(i=0;i<index-1; i++)
	{
		q=q->next;
		p=p->next;
		
	}
	p->next=q->next;
	free(q);
	return head;
}

// DELETE AT LAST........
struct Node*dellast(struct Node*head)
{
	struct Node *p=head;
	struct Node*q=head->next;
	while(q->next!=0)
	{
		p=p->next;
		q=q->next;
	}
	p->next= NULL;
	free(q);
	return head;
}

struct Node *reverse(struct Node*head)
{
	struct Node *p=head;
    struct Node*q=NULL;
    struct Node*t;
    
    while(p!=0)
    {
    	t=p->next;
    	p->next=q;
        q=p;
        p=t;
    	
    	
	}
	return q;
}
 int main()
 {
 	
	 
	 //struct Node *tem; // take temporary pointer at the key search time.
	 struct Node *head;
 	struct Node *second;
 	struct Node *third;
 	
 	head= (struct Node *)malloc(sizeof (struct Node));
 	second= (struct Node *)malloc(sizeof (struct Node));
 	third= (struct Node *)malloc(sizeof (struct Node));
 	
 	head->data=54;
 	head->next=second;
 	
 	second->data=88;
 	second->next=third;
 	
 	third->data=4;
 	third->next=NULL;
 	
 	printf(" After bring the key:\n");
 	printf("\t\n_______________________________________\t\n");
 	Display(head);
 	
	 printf("\t\n_______________________________________\t\n");
	printf(" THE NODES ARE:  %d\n",count(head));
 	printf(" THE SUM OF ALL ELEMENTS ARE : %d \n", add(head));
 	printf(" THE MAX ELEMENT IN THE NODE IS:  %d\n",Max_def(head));
 	printf(" THE MIN ELEMENT IN THE NODE IS:  %d\n",min_def(head));
 	printf("\t\n_______________________________________\t\n");
 	head=search(head,4);
 	if(head)
 	printf("%d key found....\n",head->data);
 	//printf("\t\n................\t\n");
 	else
 	printf("%d key not found!!\n");
 	printf("\t\n_______________________________________\t\n");
 	printf("Befor bring the key:\n");
 	//printf("\t\n_______________________________________\t\n");
	Display(head);
 	printf("\t\n_______________________________________\t\n");
 	
 	 
	printf(" \n insert at first!!  \n");  
	head =insertAtfirst(head, 200);
 	Display(head);
 	printf("\t\n_______________________________________\t\n");
 	
	printf(" \n insert at index!!  \n");
	head =insertAtindex(head,2,69);
 	
 	Display(head);
 	
 	
    printf("\t\n_______________________________________\t\n");
	
	printf(" \n insert at last!!  \n");
 	head =insertAtlast(head, 11);
 	Display(head);
 	printf("\t\n_______________________________________\t\n");
 	
	 printf(" \n delete first !!  \n");
	head = delfirst(head)  ;
	Display(head);
	
	printf("\t\n_______________________________________\t\n");
	printf(" \n delete at index !!  \n");
	head= delAtindex(head,3);
	Display(head);
 	printf("\t\n_______________________________________\t\n");
 	printf(" \n delete at last !!  \n");
	head= dellast(head); 
	Display(head);
	printf("\t\n_______________________________________\t\n");
	printf(" \n Reverse the linklist !!  \n");
	head=reverse(head);
	Display(head);
 }
 
