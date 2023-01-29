#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"stack.h"

void main()
{
    char string[20],count=0;
    printf("\nenter a string::");
    scanf("%s",string);
    int len=strlen(string);
    for(int i=0;i<len;i++)
    {
        push(string[i]);
    }

    for(int i=0;i<len;i++)
    {
        if(string[i]==pop())
        count++;
    }
    if(count==len)
    printf("\nstring is palindrome");
    else
    printf("\n string is not palindrome");
}