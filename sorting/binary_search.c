#include<stdio.h>
#include<string.h>
int stack[10];
int top=-1;

void push(int val)
{
    top++;
    stack[top]=val;

}

char pop()
{
    return stack[top--];
}
void main()
{
    char string[10];
    printf("enter string::");
    gets(string);
    for(int i=0;i<strlen(string);i++)
    push(string[i]);

    for(int i=0;i<strlen(string);i++)
    printf("%c",pop());
    
}