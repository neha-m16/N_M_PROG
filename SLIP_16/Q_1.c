#include<stdio.h>
#include<string.h>
typedef struct employee 
{
    char name[10];
     int age;
}record;

record employee[50];
int readfile(record *a)
{
    int i=0;
    FILE *fp;
    if((fp=fopen("employee.txt","r"))!=NULL)
    {
        while(!feof(fp))
        {
            fscanf(fp,"%s%d",&a[i].name,&a[i].age);
            i++;
        }
    }
   return i-1;
}

void writefile(record *a,int n)
{
   int i=0;
   FILE *fp;
//    if((fp=fopen("employee.txt","w"))!=NULL)
   
     fp=fopen("employee.txt","w");
    for(i=0;i<n;i++)
    fprintf(fp,"%d \t %s\n",a[i].name,a[i].age);
   

}

void bubblesort(record *a,int n)
{
    int i,j;
    record temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(strcmp(a[j].name,a[j+1].name)>=0)
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

void main()
{
    int n;
    n=readfile(employee);
    bubblesort(employee,n);
    writefile(employee,n);

}