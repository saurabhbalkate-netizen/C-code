#include <stdio.h>
#include <conio.h>

void main()
{
    int i;

    clrscr();
    printf("Using while loop:\n");
    i = 5;
    while (i <= 15)
    {
        printf("%d ", i);
        i++;
    }

    printf("\n\nUsing do-while loop:\n");
    i = 5;
    do
    {
        printf("%d ", i);
        i++;
    } while (i <= 15);
    getch();
}
