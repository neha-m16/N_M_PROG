#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node *front,*rear;

void init()
{
    front=rear=NULL;
}

void create()
{   int item;
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nenter any integer::"); 
    scanf("%d",&item);
    newnode->data=item;
    newnode->next=NULL;
    if(rear==NULL)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
    rear->next=front;
    
}

void peek()
{   if(front==NULL)
    printf("\n queue is empty");
    printf("\nthe element is::%d",front->data);
}

void display()
{
    struct node *temp;
    temp=front;
    do
    {
        printf("%d",temp->data);
         temp=temp->next;
    }while(temp!=front);
}

void dequeue()
{   
    struct node *temp;
    
    if(front==NULL)
    {
        return -1;
    }
    if(front==rear)
    {   x=front->data;
        front=front->next;
        rear->next=front;
        front=rear=NULL;
    }
    else
    temp=front;
    front=front->next;
    rear->next=front;
    free(temp);
}


void main()
{  int c;
   printf("MENU\n 1.create \n 2.display \n3.peek\n 4.delete\n 5.exit");
while(1)
{
printf("\nenter your choice::");
scanf("%d",&c);
switch(c)
{
    case 1:create();
    break;
    case 2:display();
    break;
    case 3:peek();
    break;
    case 4:delete();
    break;
    case 5:exit(0);
    break;
          

           
}

}
}