#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee
{
    char name[20];
    int age;
    int salary;
};

int main()
{
    struct employee e[100];
    int i, j, k, n, temp;
    FILE *fp;
    fp = fopen("employeee.txt", "r");
    if (fp == NULL)
    {
        printf("File not found");
        exit(0);
    }
    i = 0;
    while (fscanf(fp, "%s %d %d", e[i].name, &e[i].age, &e[i].salary) != EOF)
    {
        i++;
    }
    n = i;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(e[i].name, e[j].name) > 0)
            {
                strcpy(temp, e[i].name);
                strcpy(e[i].name, e[j].name);
                strcpy(e[j].name, temp);
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        fprintf(fp,"%s %d %d", e[i].name, e[i].age, e[i].salary);

    }
    return 0;
}