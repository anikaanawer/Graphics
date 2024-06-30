/*#include <graphics.h>

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm," ");
	circle(200,200,100);
	getchar();
	closegraph();
}*/


/*#include <graphics.h>  // Include the graphics library
#include <conio.h>     // Include the console input/output library

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");  // Initialize the graphics system

    // Draw a line from (100, 100) to (200, 200)
    line(100, 100, 200, 200);

    // Draw a rectangle with the top-left corner at (250, 150) and bottom-right corner at (400, 300)
    rectangle(250, 150, 400, 300);

    // Draw a circle with the center at (320, 240) and radius of 100
    circle(320, 240, 100);

    getchar();  // Wait for a key press
    closegraph();  // Close the graphics mode

    return 0;
}*/

///intersection point:
/*#include <graphics.h>
#include <conio.h>
#include <iostream>

using namespace std;

void findIntersection(double m1, double c1, double m2, double c2, double &x, double &y)
{
    x = (c2 - c1) / (m1 - m2);
    y = m1 * x + c1;
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Define line equations
    double m1 = 1, c1 = 50;  // y = m1 * x + c1
    double m2 = -1, c2 = 150; // y = m2 * x + c2

    // Find intersection point
    double x, y;
    findIntersection(m1, c1, m2, c2, x, y);

    // Convert to integer for graphics functions
    int x_int = static_cast<int>(x);
    int y_int = static_cast<int>(y);

    // Draw lines
    line(0, c1, getmaxx(), m1 * getmaxx() + c1); // Line 1
    line(0, c2, getmaxx(), m2 * getmaxx() + c2); // Line 2

    // Mark the intersection point
    setcolor(RED);
    circle(x_int, y_int, 5); // Draw a circle at the intersection point

    // Display coordinates
    char coord[20];
    sprintf(coord, "(%d, %d)", x_int, y_int);
    outtextxy(x_int + 10, y_int, coord);

    getch();
    closegraph();

    return 0;
}*/

///Fit a rectangle in a circle:

#include <graphics.h>
#include <conio.h>
#include <cmath>
#include <iostream>

using namespace std;

bool canFitInCircle(int width, int height, int radius)
{
    double diagonal = sqrt(width * width + height * height);
    double diameter = 2 * radius;
    return diagonal <= diameter;
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Define the dimensions of the rectangle and the radius of the circle
    int width = 100;
    int height = 50;
    int radius = 60;

    // Check if the rectangle can fit inside the circle
    bool fits = canFitInCircle(width, height, radius);

    // Draw the circle
    int circle_x = getmaxx() / 2;
    int circle_y = getmaxy() / 2;
    setcolor(WHITE);
    circle(circle_x, circle_y, radius);

    // Draw the rectangle
    int rect_x = circle_x - width / 2;
    int rect_y = circle_y - height / 2;
    setcolor(fits ? GREEN : RED);
    rectangle(rect_x, rect_y, rect_x + width, rect_y + height);

    // Display the result
    if (fits)
    {
        outtextxy(10, 10, "The rectangle fits inside the circle.");
    }
    else
    {
        outtextxy(10, 10, "The rectangle does not fit inside the circle.");
    }

    getch();
    closegraph();

    return 0;
}
