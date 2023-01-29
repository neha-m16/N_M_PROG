#include<stdio.h>

int stack[20],top=-1;

void push(int val)
{
    top++;
    stack[top]=val;
}

char pop()
{   if(top==-1)
     {
        printf("stackis empty");
     }

    return stack[top--];
}