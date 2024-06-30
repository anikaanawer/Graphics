#include <graphics.h>
#include <conio.h>

// Function to scale a point around a pivot
void scale(int &x, int &y, int xs, int ys, float scaleFactor)
{
    x = xs + (x - xs) * scaleFactor;
    y = ys + (y - ys) * scaleFactor;
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    setbkcolor(WHITE);
    cleardevice();

    // Scaling parameters
    int xs = 200, ys = 200; // Scaling center
    float scaleFactor = 1.5; // Scaling factor

    // Draw and scale a line
    int x1 = 100, y1 = 100, x2 = 200, y2 = 200;
    line(x1, y1, x2, y2);
    scale(x1, y1, xs, ys, scaleFactor);
    scale(x2, y2, xs, ys, scaleFactor);
    setcolor(RED);
    line(x1, y1, x2, y2);

    // Draw and scale a triangle
    int x3 = 150, y3 = 150, x4 = 250, y4 = 150, x5 = 200, y5 = 250;
    line(x3, y3, x4, y4);
    line(x4, y4, x5, y5);
    line(x5, y5, x3, y3);
    scale(x3, y3, xs, ys, scaleFactor);
    scale(x4, y4, xs, ys, scaleFactor);
    scale(x5, y5, xs, ys, scaleFactor);
    setcolor(GREEN);
    line(x3, y3, x4, y4);
    line(x4, y4, x5, y5);
    line(x5, y5, x3, y3);

    // Draw and scale a rectangle
    int x6 = 300, y6 = 150, x7 = 400, y7 = 150, x8 = 400, y8 = 250, x9 = 300, y9 = 250;
    rectangle(x6, y6, x8, y8);
    scale(x6, y6, xs, ys, scaleFactor);
    scale(x7, y7, xs, ys, scaleFactor);
    scale(x8, y8, xs, ys, scaleFactor);
    scale(x9, y9, xs, ys, scaleFactor);
    setcolor(BLUE);
    line(x6, y6, x7, y7);
    line(x7, y7, x8, y8);
    line(x8, y8, x9, y9);
    line(x9, y9, x6, y6);

    getchar();
    closegraph();
    return 0;
}
