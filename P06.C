#include <stdio.h>
#include <conio.h>

void main()
{
    int i;

    clrscr();
    for (i = 1; i <= 5; i++)
    {
        if (i == 3)
            continue;   /* skip 3 */
        printf("Square of %d = %d\n", i, i * i);
    }
    getch();
}
