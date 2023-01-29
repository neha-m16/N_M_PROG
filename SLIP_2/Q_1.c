// Implement a list library (singlylist.h) for a singly linked list of integer 
//  with the operations create, display. Write a menu driven program to call 
//  these operations 

#include<stdio.h>
#include"singly_list.h"


int main(){
    int c;
printf("**MENU**\n 1.create \n 2.display \n 3.exit");
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
        case 3:exit(0);
        break;
    }

}
return 0;
}