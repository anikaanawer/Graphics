/*#include <graphics.h>
#include <conio.h>

void draw()
{

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    rectangle(100, 100, 300, 200);
    rectangle(120, 120, 280, 180);

    circle(200, 190, 10);

    rectangle(165, 220, 235, 200);
    rectangle(150, 220, 250, 230);

    getchar();
    closegraph();
}

int main()
{
    draw();
    return 0;
}*/


#include <iostream>
#include <cmath>
#include <graphics.h>
using namespace std;

void findIntersection(float x1, float y1, float x2, float y2,float x3, float y3, float x4, float y4,float &x, float &y)
{
    float a1 = y2 - y1;
    float b1 = x1 - x2;
    float c1 = a1 * x1 + b1 * y1;

    float a2 = y4 - y3;
    float b2 = x3 - x4;
    float c2 = a2 * x3 + b2 * y3;

    float determinant = a1 * b2 - a2 * b1;

    if (determinant == 0)
    {
        x = 0;
        y = 0;
    }
    else
    {
        x = (b2 * c1 - b1 * c2) / determinant;
        y = (a1 * c2 - a2 * c1) / determinant;
    }
}

int main()
{
    initwindow(640, 480, "Triangle Intersection");


    float x1 = 500, y1 = 300;
    float x2 = 300, y2 = 100;
    float x3 = 100, y3 = 300;


    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    float x, y;

    findIntersection(x1, y1, x2, y2, x2, y2, x3, y3, x, y);
    circle(x, y, 5);
    outtextxy(x + 10, y + 10, "point 1");
    cout << "Intersection point 1: (" << x << ", " << y << ")" << endl;

    findIntersection(x1, y1, x3, y3, x2, y2, x3, y3, x, y);
    circle(x, y, 5);
    outtextxy(x + 10, y + 10, "point 2");
    cout << "Intersection point 2: (" << x << ", " << y << ")" << endl;

    findIntersection(x1, y1, x2, y2, x1, y1, x3, y3, x, y);
    circle(x, y, 5);
    outtextxy(x + 10, y + 10, "point 3");
    cout << "Intersection point 3: (" << x << ", " << y << ")" << endl;


    getchar();
    closegraph();

    return 0;
}
