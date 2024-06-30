#include <graphics.h>
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
}


