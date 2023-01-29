#include<stdio.h>

void generate(int *a,int n)
{
    for(int i=0;i<n;i++)
    a[i]=rand()%100;
}

void display(int *a,int n)
{
    for(int i=0;i<n;i++)
    printf(" %d ",a[i]);
}

void bubble_sort(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void main()
{   int a[10],n;
    printf("how many elements to generate::");
    scanf("%d",&n);
    generate(a,n);
    display(a,n);
    bubble_sort(a,n);
    printf("\nafter sorting::");
    display(a,n);
}