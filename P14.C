#include <stdio.h>
#include <conio.h>

void main()
{
    int m[3][4], i, j;

    clrscr();
    printf("Enter elements of 3x4 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
        {
            printf("m[%d][%d] = ", i, j);
            scanf("%d", &m[i][j]);
        }

    printf("\nThe matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%5d", m[i][j]);
        printf("\n");
    }
    getch();
}
