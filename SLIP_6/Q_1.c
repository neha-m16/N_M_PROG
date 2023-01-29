
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

selection_sort(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
    int indexofmin=i;
    for(int j=i+1;j<n;j++)
    {
        if(a[j]<a[indexofmin])
        {
            indexofmin=j;
        }
    }
    int temp=a[i];
    a[i]=a[indexofmin];
    a[indexofmin]=temp;
}}


void main()
{
    int a[10],n;
    printf("how many elements to generate::");
    scanf("%d",&n);
    generate(a,n);
    display(a,n);
    selection_sort(a,n);
    printf("\nelements after sorting are::");
    display(a,n);
}