
#include <graphics.h>
#include <conio.h>

void drawCircle(int x, int y, int radius)
{
    cleardevice();  // Clear the screen
    circle(x, y, radius);  // Draw the circle
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    int x = getmaxx() / 2;
    int y = getmaxy() / 2;
    int radius = 50;
    int step = 15;

    drawCircle(x, y, radius);

    while (1)
    {
        char ch = getchar();
        if (ch == 'i')
        {
            if (x - (radius + step) >= 0 && x + (radius + step) <= getmaxx() &&
                    y - (radius + step) >= 0 && y + (radius + step) <= getmaxy())
            {
                radius += step;
            }
        }
        else if (ch == 'd')
        {
            if (radius - step > 0)
            {
                radius -= step;
            }
        }
        else if (ch == 27)     // ESC key to exit
        {
            break;
        }
        drawCircle(x, y, radius);
    }

    closegraph();
    return 0;
}

//write a program to find the 3 intersection point coordinate of a triangle and print the intersection poin coordinates?
