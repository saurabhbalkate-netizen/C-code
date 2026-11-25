#include <stdio.h>
#include <conio.h>

int fib(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

void main()
{
    int n, i;

    clrscr();
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series (recursive):\n");
    for (i = 0; i < n; i++)
        printf("%d ", fib(i));
    getch();
}
