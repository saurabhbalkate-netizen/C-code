#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i, a = 0, b = 1, next;

    clrscr();
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series (iterative):\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    getch();
}
