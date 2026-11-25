#include <stdio.h>
#include <conio.h>

void main()
{
    char ch, str[31];
    int a, b;

    clrscr();
    printf("Enter a single character: ");
    ch = getchar();
    printf("You entered: ");
    putchar(ch);
    printf("\n");

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Sum = %d\n", a + b);

    fflush(stdin);  /* clear leftover newline */
    printf("Enter a short sentence (max 30 chars): ");
    gets(str);
    printf("You entered: ");
    puts(str);
    getch();
}
