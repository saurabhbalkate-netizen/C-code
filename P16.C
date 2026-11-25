#include <stdio.h>
#include <conio.h>

void main()
{
    int m[3][4], i, j, max;

    clrscr();
    printf("Enter elements of 3x4 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
            scanf("%d", &m[i][j]);

    max = m[0][0];
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
            if (m[i][j] > max)
                max = m[i][j];

    printf("Largest element = %d\n", max);
    getch();
}
