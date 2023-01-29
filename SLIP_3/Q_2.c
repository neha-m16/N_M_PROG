#include<math.h>   //as we are using power function pow
#include<ctype.h>  //as we use isdigit function to check whether string character is digit or operator
#include<stdio.h>
int stack[20],op1,op2,top=-1;
void push(int x)
{
    top++;
    stack[top]=x;
}

int pop()
{ 
    
   return stack[top--];
}

void main()
{
     char exp[20],*e;
     int result;
     e=exp;
     printf("enter postfix expression::");
     gets(e);
    while(*e!='\0')
     {
        if(isdigit(*e))
        push(*e-48);
        else
        {
            op2=pop();
            op1=pop();
            switch(*e)
            {
                case '+':push(op1+op2);
                break;
                case '-':push(op1-op2);
                break;
                case '*':push(op1*op2);
                break;
                case '/':push(op1/op2);
                break;
                

            }
        }e++;
     }
     printf("result is %d",pop());
}