#include <stdio.h>
#include <conio.h>

void multiply(int x)
{
    x = x * 5;
    printf("Inside function: x = %d\n", x);
}

void main()
{
    int num = 10;

    clrscr();
    printf("Before call: num = %d\n", num);
    multiply(num);
    printf("After call (in main): num = %d (unchanged)\n", num);
    getch();
}
