#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL,*temp;

void create()
{   int item;
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node*));
    printf("\nenter any integer::");
    scanf("%d",&item);
    newnode->next=NULL;
    newnode->data=item;
    if(head==NULL)
    {
        head=temp=newnode;
    }
    else
    {
          temp->next=newnode;
          temp=newnode;
    }


}

void display()
{
    {  
        if(head==NULL)
        {
            printf("\nlinked list is empty");
        } 
       
        else
        {   
             temp=head;
           while(temp!=NULL)
           {
            printf("%d\n",temp->data);
            temp=temp->next;
           }
             
        }
    }
}