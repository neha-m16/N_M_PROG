#include<stdio.h>
#include<math.h>

void generate(int *a,int n)
{   srand(time(0));
    for(int i=0;i<n;i++)
    a[i]=rand()%100;
}

void display(int *a,int n)
{
    for(int i=0;i<n;i++)
    printf(" %d ",a[i]);
}

int linear_search(int *a,int n,int element)
{
    for(int i=0;i<n;i++)
    {
        if(element==a[i])
        return i;
    }
    return -1;
}
void main()
{
    int a[10],n,element;
    printf("how many elements to generate::");
    scanf("%d",&n);
    generate(a,n);
    display(a,n);
    printf("enter element to be searched:: ");
    scanf("%d",&element);
    int index=linear_search(a,n,element);
    if(index==-1)
    {
        printf("element not found ");
    }
    else
    printf("element ot found at a[%d]");
}