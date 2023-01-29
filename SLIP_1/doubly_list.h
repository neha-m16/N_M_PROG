#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node* next;
    struct node* prev;
};
struct node *head=NULL,*temp;
void create()
{
    struct node *newnode;
    int item;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter integer::");
    scanf("%d",&item);
    newnode->data=item;
    newnode->next=NULL;
    newnode->prev=NULL;
     if(head==NULL)
    {    
        head=temp=newnode;
        
    }  
    else
    {   
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;

    }
 
}

void display()
{
   
    if(head==NULL)
    {
        printf("\nlinked list is empty");
     }
     else
     {
    printf("\nthe linked list is::");
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;

    }
    }


}






