#include <stdio.h>
#include <string.h>
#include <conio.h>

void main()
{
    char str[10][30];
    char *ptr[10], *temp;
    int n, i, j;

    clrscr();
    printf("How many strings (max 10)? ");
    scanf("%d", &n);

    printf("Enter %d strings:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
        ptr[i] = str[i];
    }

    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (strcmp(*(ptr + i), *(ptr + j)) > 0)
            {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }

    printf("\nSorted strings:\n");
    for (i = 0; i < n; i++)
        printf("%s\n", *(ptr + i));
    getch();
}
