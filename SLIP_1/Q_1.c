#include<stdio.h>
#include"doubly_list.h"







int main()

{
    int c;
    
    while(1)
    {printf("**MENU**");
    printf("\n1.Create");
    printf("\n2.Display");
    printf("\n3.exit");

    
     
    printf("\nEnter your choice::");
    scanf("%d",&c);
    switch(c)
    {
        case 1: create(); 
        break;
        case 2: display(); 
        break;
        case 3:exit(0);   
        break;
    }

    }


return 0;
}

