#include<stdio.h>
#include"Q_2.h"

int main ()  
{  
    int choice;   
    init();
    printf("\n QUEUE OPERATIONS USING ARRAY");
    printf("\n1.add queue\n2.Delete queue\n3.Display the queue\n4.display first element\n 5.exit");  
    while(1)   
    {     
        printf("\nEnter your choice : ");  
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            enqueue();  
            break;  
            case 2:  
            dequeue();  
            break;  
            case 3:  
            display();  
            break;  
            case 4:peek();
            break;
            case 5:  
            exit(0);  
            break;  
            default:   
            printf("\nEnter valid choice??\n");  
        }  
    }
    return 0;
}  
