/* Write a program that copies the contents of one stack into another. Use 
 stack library to perform basic stack operations. The order of two stacks 
 must be identical.(Hint: Use a temporary stack to preserve the order).*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 10
 struct stack
 {
    int a[max];
    int top;
 };
 

void push(struct stack *s,int val)
{  
    if(s->top==max-1)
    printf("\nstack is full");

    s->top++;
    s->a[s->top]=val;
}

int  display(struct stack *s)
{  
    if(s->top==-1)
    {
    printf("\nstack is empty");
    return -1;
    }
    else{
    for(int i=s->top;i>=0;i--)
    printf(" %d ",s->a[i]);
    }
}

int pop(struct stack *s)
{
    if(s->top==-1)
    {
    printf("\nstack is empty");
    return -1;
    }
    // int x=s->a[s->top];
    // s->top--;
    return s->a[s->top--];
}

void copy(struct stack *s1,struct stack *s2)
{
    int x;
    while(s1->top!=-1)
    {
        x=pop(s1);
        push(s2,x);
    }
    
}


 void main()
 {  struct stack s1,s2,s3;
    s1.top=-1;s2.top=-1,s3.top=-1;
    push(&s1,10);
    push(&s1,20);
    push(&s1,30);
    push(&s1,40);
    push(&s1,50);

    printf("stack 1::");
    display(&s1);
    copy(&s1,&s3);
    copy(&s3,&s2);
    printf("\nstack 2 ::");
    display(&s2);
    
    

    
 }