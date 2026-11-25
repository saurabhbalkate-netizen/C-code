#include <stdio.h>
#include <conio.h>

void main()
{
    int i;

    clrscr();
    printf("Odd numbers from 1 to 10:\n");
    for (i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
            continue;   /* skip even numbers */
        printf("%d ", i);
    }
    getch();
}
