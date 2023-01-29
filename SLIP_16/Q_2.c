#include<stdio.h>
#include<string.h>
#include<math.h>
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

int evalpostfix(char *postfix)
{    char *e;
     e=postfix;
     int op2,op1,x;
     while(*e!='\0')
     {
       if(isdigit(*e))
       {
          push(*e-48);
       }
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
     printf("\nevaluation of given expression is::%d",pop());
     
}











void main()
{  char postfix[20];
int num;
   printf("enter the expression::");
   gets(postfix);
   for(int i=0;i<strlen(postfix);i++)
   {
    if(isalpha(postfix[i]))
    {
        printf("\nenter the value of %c",postfix[i]);
        scanf("%d",&num);
        num=num+48;
        for(int j=i+1;j<strlen(postfix);j++)
        {
            if(postfix[j]==postfix[i])
            {
                postfix[j]=num;
            }
        }
        postfix[i]=num;
    }
   }
   printf("\n now given expression is::");
   puts(postfix);
   evalpostfix(postfix);
   


}