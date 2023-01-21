#include<stdio.h>
#include<stdlib.h>

//Define Node...
struct node {
    int coef;
    int expo;
    struct node *next;
};
struct node *trd_poly_head=NULL;
struct node *trd_poly_tail=NULL;


//Create Function.....
struct node * createNode(int coef, int expo)
{
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node ));
    n->coef=coef;
    n->expo=expo;
    n->next=NULL;

    return n;
}

//Dislay Function...
void display(struct node *p)
{
    while(p)
    {
       if (p->next!=NULL)
        {
            printf("%dx^%d + ",p->coef,p->expo);
            p=p->next;
        }
        else
        {
            printf("%dx^%d \n ",p->coef,p->expo);
            p=p->next;
        }
    }
   
}
//Append fun..

//   void append(int x,int y){
//     struct node *trd_poly_head=createNode(x,y);
//     while(trd_poly_head!=0)
//     {
//         trd_poly_head=trd_poly_head->next;
//     }
//}

void append(int expo,int coef){
    struct node* newnode=createNode(coef,expo);
     
     if (trd_poly_head==NULL)
    {
        trd_poly_head=trd_poly_tail=newnode;
        return;
    }
    trd_poly_tail->next=newnode;
    trd_poly_tail=newnode;
    return;
}

// Add two polynomial....
void addPolynomial(struct node *p1, struct node *p2)
{
    if(p1==0 && p2==0)
    {
        printf("Input valid polynomial!\n");
        return ;
    }
   while (p1!=NULL && p2!=NULL)
    {
        //when p1 exponent is greater than p2 exponent
        if(p1->expo>p2->expo)
        {
            append(p1->expo,p1->coef);
            p1=p1->next;
            
        }
        if(p1->expo<p2->expo)
        {
            append(p2->coef,p2->coef);
            p2=p2->next;
        }
        if(p1->expo==p2->expo)
        {
            append(p2->expo,p1->coef+p2->coef);
             p1=p1->next;
            p2=p2->next;
        }
    }
    
       
}

int main()
{
    // first Polynomial.......

    struct node *fst_poly_head=createNode(4,2);
    struct node *fst_poly_second=createNode(3,1);
    struct node *fst_poly_third=createNode(9,0);
    
    fst_poly_head->next=fst_poly_second;
    fst_poly_second->next=fst_poly_third;
    printf("The first Polynomial is:");
    display(fst_poly_head);

    // Second Polynomial.......

    struct node *snd_poly_head=createNode(2,3);
    struct node *snd_poly_second=createNode(1,2);
    struct node *snd_poly_third=createNode(4,0);

    snd_poly_head->next=snd_poly_second;
    snd_poly_second->next=snd_poly_third;
    printf("The Second Polynomial is:");
    display(fst_poly_head);

    

    addPolynomial(fst_poly_head,snd_poly_head);
    printf("Final Polynomial is: ");
    display(trd_poly_head);

  return 0;
}
