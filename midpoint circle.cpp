#include <graphics.h>
#include <conio.h>

// Function to plot the points in all eight octants
void plotPoints(int xc, int yc, int x, int y)
{
    putpixel(xc + x, yc + y, WHITE);
    putpixel(xc - x, yc + y, WHITE);
    putpixel(xc + x, yc - y, WHITE);
    putpixel(xc - x, yc - y, WHITE);
    putpixel(xc + y, yc + x, WHITE);
    putpixel(xc - y, yc + x, WHITE);
    putpixel(xc + y, yc - x, WHITE);
    putpixel(xc - y, yc - x, WHITE);
}

// Function to implement Midpoint Circle Drawing Algorithm
void midpointCircleDrawing(int xc, int yc, int r)
{
    int x = 0, y = r;
    int d = 1 - r;  // Decision parameter

    plotPoints(xc, yc, x, y);  // Initial point (0, r)

    while (x <= y)
    {
        x++;
        if (d < 0)
        {
            d = d + 2 * x + 1;
        }
        else
        {
            y--;
            d = d + 2 * (x - y) + 1;
        }
        plotPoints(xc, yc, x, y);
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    int xc = 200, yc = 200, r = 100;
    midpointCircleDrawing(xc, yc, r);

    getchar();
    closegraph();
    return 0;
}

