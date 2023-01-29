#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL,*temp;

void create(int item)
{  
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
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
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next; 
        
    }
}

void delete()
{
  struct node *temp1;
//       temp1 =head;
//     if (temp1 == NULL)
//     {
//         printf("List is empty");
//         return;
//     }
//     else
//     {
//         head = head->next;
//         free(temp1);
//     }
// }
     int num;
    printf("\nenter element to delete::");
    scanf("%d",&num);
    temp=head;
    temp1=head;
    if(head->data==num)
    {    
        head=head->next;
    
       
      free(temp1);
    }
    else
    {   for(temp=head;temp->next!=NULL;temp=temp->next)
        if(temp->next->data==num)
        {
           temp1= temp->next;
           temp->next=temp1->next;
           free(temp1);
        }
        
    }
}




void main()
{
    int c,item,maxsize;
    printf("MENU\n 1.create \n 2.delete specific element \n3.display \n4.exit");
    while(1)
    {
    printf("\nenter your choice::");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        printf("how many nodes you want to enter");
        scanf("%d",&maxsize);
        for(int i=0;i<maxsize;i++)
    {
        printf("\nenter any integer::");
        scanf("%d",&item);
        create(item);
    }

        break;
        case 2:delete();
        break;
        case 3:display();
        break;
        case 4:exit(0);
        break;
    }
    
    }
}