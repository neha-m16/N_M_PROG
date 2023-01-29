#include<stdio.h>
int i,j;
void generate(int *a,int n)
{
    for(i=0;i<n;i++)
    a[i]=rand()%100;
}

void display(int *a,int n)
{
    for(i=0;i<n;i++)
    printf(" %d ",a[i]);
}

void insertion_sort(int *a,int n)
{ int key;
    for(i=1;i<n;i++)
    {
        j=i-1;  
        if(a[j]>a[i])
        { key=a[i];
        while(j>=0 && key<a[j] )
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
        }
    }
}

void main()
{   int a[10],n;
    printf("how many elements to generate::");
    scanf("%d",&n);
    generate(a,n);
    display(a,n);
    insertion_sort(a,n);
    printf("\nelements after sorting::");
    display(a,n);
}