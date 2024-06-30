#include <graphics.h>
#include <conio.h>

// Function to translate a point
void translate(int &x, int &y, int tx, int ty)
{
    x = x + tx;
    y = y + ty;
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    setbkcolor(WHITE);
    cleardevice();

    // Translation parameters
    int tx = 50, ty = 50;

    // Original and translated coordinates for line
    int x1 = 100, y1 = 100, x2 = 200, y2 = 200;
    line(x1, y1, x2, y2);
    translate(x1, y1, tx, ty);
    translate(x2, y2, tx, ty);
    setcolor(RED);
    line(x1, y1, x2, y2);

    // Original and translated coordinates for triangle
    int x3 = 150, y3 = 150, x4 = 250, y4 = 150, x5 = 200, y5 = 250;
    line(x3, y3, x4, y4);
    line(x4, y4, x5, y5);
    line(x5, y5, x3, y3);
    translate(x3, y3, tx, ty);
    translate(x4, y4, tx, ty);
    translate(x5, y5, tx, ty);
    setcolor(GREEN);
    line(x3, y3, x4, y4);
    line(x4, y4, x5, y5);
    line(x5, y5, x3, y3);

    // Original and translated coordinates for rectangle
    int x6 = 300, y6 = 150, x7 = 400, y7 = 150, x8 = 400, y8 = 250, x9 = 300, y9 = 250;
    rectangle(x6, y6, x8, y8);
    translate(x6, y6, tx, ty);
    translate(x7, y7, tx, ty);
    translate(x8, y8, tx, ty);
    translate(x9, y9, tx, ty);
    setcolor(BLUE);
    rectangle(x6, y6, x8, y8);

    getchar();
    closegraph();
    return 0;
}

