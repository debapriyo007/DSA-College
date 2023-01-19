#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *tail=NULL;
void Create(int val){
    struct node newnode=(struct node)malloc(sizeof(struct node));
    newnode ->data=val;
    newnode->next=NULL;
    if (head==NULL)
    {
        head=tail=newnode;
    }else{
        tail->next=newnode;
        tail=newnode;
    }
}
void Display(struct node *temp){
    //struct node *temp=head;
    if (temp==NULL)
    {
        printf("The LinkedList is not created yet!\n");
        return;
    }
    while (temp!=NULL)
    {
        printf("%d ->",temp->data);
        temp=temp->next;
    }
    printf("null\n");
}
void Delete(int val){
    if (head==NULL)
    {
        printf("The LinkedList is not created yet!\n");
        return;
    }
    if (head->data==val){
        struct node *temp=head;
        head=head->next;
        free(temp);
        return;
    }
    {
        /* code */
    }
    
    struct node *temp=head;
    if (temp->next->data==val)
    {
        struct node *del=temp->next;
        temp->next=temp->next->next;
        free(del);
        return;
    }
    
}
int size(struct node *temp){
    int count=0;
    while (temp!=NULL)
    {
        count++;
        temp=temp->next;

    }
    return count;
}
int search(struct node *temp,int val){
    int count=1;
    while (temp!=NULL)
    {
        if(temp->data==val){
            return count;
        }
        temp=temp->next;
        count++;
    }
    return -1; 
}
struct node* ite_reverse(){
    struct node *prev=NULL;
    struct node *curr=head;
    struct node *next=NULL;
    while (curr!=NULL)
    {
       next=curr->next;
       curr->next=prev;
       prev=curr;
       curr=next;
    }
    
    return prev;
}
struct node* rec_reverse(struct node *first){
    if (first==NULL)
    {
        return first;
    }
    if (first->next==NULL)
    {
        return first;
    }
    struct node* newHead=rec_reverse(first->next);
    first->next->next=first;
    first->next=NULL;
    return newHead;

}
void search_delete(int key){
    struct node *temp=head;
    if (temp==NULL)
    {
        printf("Linked List Is Empty !!!\n");
        return;
    }
    if (head->data==key)
    {
        struct node *del=head;
        head=head->next;
        free(del);
        return;
    }
    
    while (temp!=NULL)
    {
        if (temp->next->data==key)
        {
            struct node *del=temp->next;
            temp->next=temp->next->next;
            free(del);
            return;
        }
        temp=temp->next;
    }   
}
bool isContains(int key,int arr[],int ei){

   for (int i = 0; i < ei; i++)
   {
        if (arr[i]==key)
        {
            return true;
        }
        
   }
   return false;
     
}
void remove_duplicate(struct node *temp){
    int ei=size(head);
    int arr[ei];
    static int i=0;
    arr[i]=temp->data;
    
    i++;
    struct node *prev=temp;
    temp=temp->next;
    while (temp!=NULL)
    {
        if(isContains(temp->data,arr,ei)){
            temp=prev;
            temp->next=temp->next->next;
            temp=temp->next;
        }
        else
        {
            arr[i]=temp->data;
            i++;
            prev=temp;
            temp=temp->next;
        }
        
    }
    

}
 static int min;
 static int max;

void min_max(struct node *temp){
      min=temp->data;
      max=temp->data;
    while (temp!=NULL)
    {
       if (temp->data<min)
       {
            min=temp->data;
       }
       if (temp->data>max)
       {
            max=temp->data;
       }
       temp=temp->next;
    }
    
}
void Delete_last(struct node *temp){
    if (temp==NULL)
    {
        printf("LL is Empty !!!");
    }
    while (temp->next->next != NULL)
    {
        temp=temp->next;
    }
    temp->next=NULL;
    
    
}
struct node* getMid(struct node *temp){
    struct node *slow=temp;
    struct node *fast=temp;
    while (fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
void insert_mid(struct node *temp,int val){
    if (temp==NULL || temp->next==NULL)
    {
        printf("Insertion in middle not possible !!!");
        return;
    }
    
    struct node *slow=temp;
    struct node *fast=temp->next;
    while (fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }  
    struct node *mid=slow;
    struct node *store=mid->next;
    struct node newnode=(struct node)malloc(sizeof(struct node));
    newnode->data=val;
    mid->next=newnode;
    newnode->next=store;
    
}
struct node* insert_any_pos(struct node *temp,int pos,int idx,int data){
    //recursive approch
    // if (temp==NULL)
    // {
    //    printf("NO node present !!!\n");

    //    return NULL;
    // }
    if (pos==1)
    {
        struct node newnode =(struct node)malloc(sizeof(struct node));
        newnode ->data=data;
        newnode->next=head;
        head=newnode;
        return head;
    }
    if (pos==size(head))
    {
        struct node newnode =(struct node)malloc(sizeof(struct node));
        newnode ->data=data;
        newnode->next=NULL;
        return newnode;
    }
    
    
    if (pos==idx+1)
    {
        struct node newnode =(struct node)malloc(sizeof(struct node));
        newnode ->data=data;
        newnode->next=temp->next;
        temp->next=newnode;
        return temp;
    }
    struct node *currnode= insert_any_pos(temp->next,pos,idx++,data);
    temp->next=currnode;
    return temp;
    
}
void ite_insertion(struct node *temp,int pos,int idx,int data){
    if (pos==1)
    {
        struct node newnode =(struct node)malloc(sizeof(struct node));
        newnode ->data=data;
        newnode->next=temp;
        temp=newnode;
        return;
    }
    
    while(temp!=NULL){
        if (pos==idx+1)
        {
        struct node newnode =(struct node)malloc(sizeof(struct node));
        newnode ->data=data;
        newnode->next=temp->next; 
        temp->next=newnode;
        return; 
        }
        idx++;
        temp=temp->next;
        
    }
}
void ite_deletion(struct node *temp,int pos,int idx){
    if (pos<0||pos>size(head))
    {
        printf("The Pointer Does Not Point Any Valid Address !!!\n");
    }
    
    if (pos==1)
    {
        head=head->next;
        return;
    }
    
    while(temp!=NULL){
        if (pos==idx+1)
        {
        temp->next=temp->next->next;
        return; 
        }
        idx++;
        temp=temp->next;
        
    }
}
void find_add(struct node *temp,int find,int insert){
    int find_idx=search(temp,find);
    // printf("\n%d",find_idx);
    if (find_idx==-1)
    {
        printf("The required node is not present in the LL !!\n");
        return;
    }
    else{
        ite_insertion(temp,find_idx+1,1,insert);
        return;
    }
    
}

int main()
{
    
    Create(4);
    Create(5);
    Create(6);
    Create(7);
    Create(8);
    Display(head);
    // printf("\n");
    // Display(rec_reverse(head));
    // search_delete(4);
    // Display(head);
    // remove_duplicate(head);
    // Display(head);
    // min_max(head);
    // printf("min=%d\nmax=%d\n",min,max);
    // Delete_last(head);
    // Display(head);
    // insert_mid(head,9);
    // Display(head);
    //insert_any_pos(head,5,1,9);
    // printf("After Insertion !!!\n");
    // ite_insertion(head,6,1,9);
    // Display(head);
    // printf("After Deletion !!!\n");
    // ite_deletion(head,1,1);
    // Display(head);
    // printf("Create n number of nodes !!!\n\nHow many number of nodes you want to create ?\n");
    // int n;
    // scanf("%d",&n);
    // for (int i = 0; i < n; i++)
    // {
    //    Create(0);
    // }
    find_add(head,5,11);
    Display(head);
    ite_deletion(head,6,1);
    Display(head);
    
    return 0;
}