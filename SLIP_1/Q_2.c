// Write a program that sorts the elements of linked list using any of sorting technique.
#include<stdio.h>
#include<stdlib.h>

struct node
 {
    int data;
    struct node *next;
};

struct node *head=NULL,*temp;

void create()
{
    struct node* newnode; int item;
    newnode= (struct node *)malloc(sizeof(struct node));
    printf("\n Enter any integer::");
    scanf("%d",&item);
    newnode->data=item;
    newnode->next=NULL;
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
    if (head==NULL)
    printf("linked list is empty\n");
    else
    {   printf("\nthe linked list is::\n");
        temp=head;
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}

void bubble_sort() 
{
    struct node *i,*j;
    int a;
    
    
   

    for( i=head; i->next!=NULL;i=i->next)   //for pass
    {
        
         for(j=head; j->next!=NULL; j=j->next)    //for comparisons
         
         {
           if( j->data>j->next->data)
           {
                int a=j->data;
                j->data=j->next->data;
                j->next->data=a;
               
           }
        
         }
         
    }
    
}


int main(){
    int c;
    printf("**MENU**\n  1.create \n2.display linked list \n3.display sorted elements  \n4.exit");
    while(1)
    {printf("\nenter your choice::");
    scanf("%d",&c);
    switch(c)
    {
    case 1:create();
        break;
    
    case 2:display();
        break;

    case 3:bubble_sort();
    display();
         break;

    case 4:exit(0);
         break;
    }
   
}
return 0;
}