#include <stdio.h>
#include <conio.h>

void main()
{
    float h = 20, w = 25.3, d = 10.2, volume;

    clrscr();
    volume = h * w * d;
    printf("Height = %.1f cm\n", h);
    printf("Width  = %.1f cm\n", w);
    printf("Depth  = %.1f cm\n", d);
    printf("Volume = %.2f cubic cm\n", volume);
    getch();
}
