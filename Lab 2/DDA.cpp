#include <graphics.h>   // WinBGIm graphics library
#include <conio.h>      // getch()
#include <math.h>       // abs()

// No need to redefine round() — use int cast for rounding
int main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2, steps;
    float xincr, yincr, x, y, dx, dy;

    printf("Enter x1 y1: ");
    scanf("%d %d", &x1, &y1);

    printf("Enter x2 y2: ");
    scanf("%d %d", &x2, &y2);

    // Initialize graphics window
    initgraph(&gd, &gm, "");

    dx = x2 - x1;
    dy = y2 - y1;

    // DDA algorithm steps
    if (fabs(dx) > fabs(dy))
        steps = (int)fabs(dx);
    else
        steps = (int)fabs(dy);

    xincr = dx / steps;
    yincr = dy / steps;

    x = x1;
    y = y1;

    // Draw initial pixel
    putpixel((int)(x + 0.5), (int)(y + 0.5), WHITE);

    for (int k = 1; k <= steps; k++)
    {
        delay(100);  // slow drawing so we can see it
        x += xincr;
        y += yincr;
        putpixel((int)(x + 0.5), (int)(y + 0.5), WHITE);
    }

    outtextxy(200, 20, "DDA Algorithm Output");
    outtextxy(x1 + 5, y1 - 5, "(x1,y1)");
    outtextxy(x2 + 5, y2 - 5, "(x2,y2)");

    getch();       // wait for key press
    closegraph();  // close graphics window
    return 0;
}
