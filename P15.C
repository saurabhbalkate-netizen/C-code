#include <stdio.h>
#include <conio.h>

struct employee
{
    char name[30];
    int id;
    float salary;
};

void main()
{
    struct employee e[5];
    int i;

    clrscr();
    for (i = 0; i < 5; i++)
    {
        printf("Enter details of employee %d\n", i + 1);
        printf("Name   : ");
        scanf("%s", e[i].name);
        printf("ID     : ");
        scanf("%d", &e[i].id);
        printf("Salary : ");
        scanf("%f", &e[i].salary);
    }

    printf("\n%-5s %-20s %-8s %-10s\n", "Sr", "Name", "ID", "Salary");
    for (i = 0; i < 5; i++)
        printf("%-5d %-20s %-8d %-10.2f\n", i + 1, e[i].name, e[i].id, e[i].salary);
    getch();
}
