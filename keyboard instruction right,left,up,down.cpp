#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    int x = getmaxx() / 2;
    int y = getmaxy() / 2;
    int radius = 50; // Radius of the circle

    char ch;
    do
    {
        cleardevice(); // Clear the screen
        circle(x, y, radius); // Draw the circle
        ch = getchar(); // Get a key press

        if (ch == 'l')
        {
            x -= 10; // Move left
        }
        else if (ch == 'r')
        {
            x += 10; // Move right
        }
        else if (ch == 'u')
        {
            y -= 10; // Move up
        }
        else if (ch == 'd')
        {
            y += 10; // Move down
        }

    }
    while (ch != 'q');   // Press 'q' to quit

    closegraph();
    return 0;
}

