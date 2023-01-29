#include<stdio.h>   
#include<stdlib.h>  

int front = -1, rear = -1 ,maxsize;  
int queue[20];  
void enqueue(int item)  
{  
          
    if(rear == maxsize-1)  
    {  
        printf("\nOVERFLOW\n");  
        return;  
    }  
    
    else   
    {  
        if(front==-1)
        front=0;
        rear++;  
      queue[rear] = item;  
    }
    
      
}  
void dequeue()  
{  
    int x;   
    if (front == -1 || front > rear)  //?
    {  
        printf("\nUNDERFLOW\n");  
        return;  
              
    }  
    else  
    if(front=rear=maxsize-1)
    front=rear=-1;
    {  while(front!=maxsize)
        {x=queue[front];
        enqueue(x);
        front++;
        }
        
    }  
      
      
}  
void display()  
{  
    int i;  
    if(rear == -1)  
    {  
        printf("\nEmpty queue\n");  
    }  
    else  
    
    {   printf("\n Elements in the queue are\n");  
        for(i=front;i<=rear;i++)  
        {  
            printf("\n%d",queue[i]);  
        }     
    }  
} 



void main ()  
{  
    int item;   
    printf("\n Enter the size of QUEUE : ");
    scanf("%d",&maxsize);
    for(int i=0;i<maxsize;i++)
{    printf("\nenter any integer::");
    scanf("%d",&item);
    enqueue(item);}
    
    display();
    dequeue();
    display();
    

    
    
}