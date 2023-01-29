#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};

struct node *front,*rear;

void init()
{
    front=rear=NULL;
}

void enqueue()
{   int item;
    struct node* newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter value to be inserted::");
    scanf("%d",&item);
    newnode->data=item;
    newnode->next=NULL;
    if(rear==NULL)
    {
         front =rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
}

void dequeue()
{
    struct node*newnode;
    newnode=front;
    if(isEmpty())
    {
        printf("\n queue is empty");
        return;
    }
    else if(front==rear)
    {
        front=rear=NULL;
    }
    else
    {   
        printf("\ndelete element is %d",front->data);
        front=front->next;
        free(newnode);
    }
}
    
    int isEmpty()
    {
        if(front==NULL)
        return 1;
        else
        return 0;
    }

    void peek()
    {
        if(isEmpty())
        {
            printf("\nqueue is empty");
        }
        else
        {
            printf("element is %d",front->data);
        }

    }

    void display(){

       struct node* newnode;
       if(front==NULL)
       printf("queue is empty");
       else
       newnode=front;
       while(newnode!=NULL)
       {
        printf(" %d ",newnode->data);
        newnode=newnode->next;
       }

    }


