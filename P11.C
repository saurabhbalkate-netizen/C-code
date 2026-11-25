#include <stdio.h>
#include <string.h>
#include <conio.h>

void main()
{
    char str[10][30], temp[30];
    int n, i, j;

    clrscr();
    printf("How many strings (max 10)? ");
    scanf("%d", &n);

    printf("Enter %d strings:\n", n);
    for (i = 0; i < n; i++)
        scanf("%s", str[i]);

    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }

    printf("\nSorted strings:\n");
    for (i = 0; i < n; i++)
        printf("%s\n", str[i]);
    getch();
}
