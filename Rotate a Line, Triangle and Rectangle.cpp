#include <graphics.h>
#include <conio.h>
#include <math.h>

#define PI 3.14159265

// Function to rotate a point around a pivot
void rotate(int &x, int &y, int xr, int yr, float angle)
{
    int tempX = x - xr;
    int tempY = y - yr;
    float rad = angle * PI / 180.0;
    x = xr + (tempX * cos(rad) - tempY * sin(rad));
    y = yr + (tempX * sin(rad) + tempY * cos(rad));
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    setbkcolor(WHITE);
    cleardevice();

    // Rotation parameters
    int xr = 200, yr = 200; // Rotation center
    float angle = 45.0; // Rotation angle in degrees

    // Draw and rotate a line
    int x1 = 100, y1 = 100, x2 = 200, y2 = 200;
    line(x1, y1, x2, y2);
    rotate(x1, y1, xr, yr, angle);
    rotate(x2, y2, xr, yr, angle);
    setcolor(RED);
    line(x1, y1, x2, y2);

    // Draw and rotate a triangle
    int x3 = 150, y3 = 150, x4 = 250, y4 = 150, x5 = 200, y5 = 250;
    line(x3, y3, x4, y4);
    line(x4, y4, x5, y5);
    line(x5, y5, x3, y3);
    rotate(x3, y3, xr, yr, angle);
    rotate(x4, y4, xr, yr, angle);
    rotate(x5, y5, xr, yr, angle);
    setcolor(GREEN);
    line(x3, y3, x4, y4);
    line(x4, y4, x5, y5);
    line(x5, y5, x3, y3);

    // Draw and rotate a rectangle
    int x6 = 300, y6 = 150, x7 = 400, y7 = 150, x8 = 400, y8 = 250, x9 = 300, y9 = 250;
    rectangle(x6, y6, x8, y8);
    rotate(x6, y6, xr, yr, angle);
    rotate(x7, y7, xr, yr, angle);
    rotate(x8, y8, xr, yr, angle);
    rotate(x9, y9, xr, yr, angle);
    setcolor(BLUE);
    line(x6, y6, x7, y7);
    line(x7, y7, x8, y8);
    line(x8, y8, x9, y9);
    line(x9, y9, x6, y6);

    getchar();
    closegraph();
    return 0;
}

