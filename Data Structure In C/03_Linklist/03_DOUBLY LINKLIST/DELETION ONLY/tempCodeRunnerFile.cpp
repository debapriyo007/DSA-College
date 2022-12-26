struct Node *delAtindex(struct Node*head,int index)
{
	struct Node *p=head;
	struct Node *q=head->next;
	for(int i=0;i<index-1;i++)
	{
		p=p->next;
		q=q->next;
		
	}
	p->next=q->next;
	q->next->prev=p;
	free(q);
	return head;
}
