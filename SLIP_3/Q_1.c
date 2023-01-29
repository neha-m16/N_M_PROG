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

void insertion_sort(int *a,int n)
{  
     int key;
    for( int i=1;i<n;i++)
   { 
    int j=i-1;
    if(a[j]>a[i])
    {
       key=a[i];
       while(j>=0 && key<a[j])
       {
        a[j+1]=a[j];
        j--; 
       }
       a[j+1]=key;
    }
   }
}


int main()
{   int n,a[10];
    printf("how many elements to generate::");
    scanf("%d",&n);
    generate(a,n);
    printf("\nthe elements are::");
    display(a,n);
    insertion_sort(a,n);
    printf("\nafter sorting elements are::");
    display(a,n);

return 0;
}