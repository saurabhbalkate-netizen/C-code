#include <stdio.h>
#include <conio.h>

void main()
{
    int a[50], n, i;

    clrscr();
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
        if (a[i] < 0)
            a[i] = 0;

    printf("Array after replacing negatives with 0:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    getch();
}
