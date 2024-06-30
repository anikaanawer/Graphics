//bresenham
/*#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
void drawline(int x0, int y0, int x1, int y1)
{
    int dx, dy, p, x, y;
	dx=x1-x0;
	dy=y1-y0;
	x=x0;
	y=y0;
	p=2*dy-dx;
	while(x<x1){
		if(p>=0){
			putpixel(x,y,7);
			y=y+1;
			p=p+2*dy-2*dx;
		}
		else{
			putpixel(x,y,WHITE);
			p=p+2*dy;
		}
		x=x+1;
	}
}
int main()
{
	int gdriver=DETECT, gmode, error, x0, y0, x1, y1;
	initwindow(600, 600, "c211237");
	cout<<"Enter co-ordinates of first point: ";
	cin>>x0>>y0;
	cout<<"Enter co-ordinates of second point: ";
	cin>>x1>>y1;
	drawline(x0, y0, x1, y1);
	getchar();
	return 0;
}*/
#include <iostream>
#include <graphics.h>  // Include graphics library (use appropriate graphics library based on your environment)

// Function to implement Bresenham's Line Drawing Algorithm
void bresenhamLine(int x1, int y1, int x2, int y2)
{
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    int p = 2 * dy - dx;
    int twoDy = 2 * dy;
    int twoDyDx = 2 * (dy - dx);
    int x, y;

    // Determine the direction of the line
    if (x1 > x2)
    {
        x = x2;
        y = y2;
        x2 = x1;
    }
    else
    {
        x = x1;
        y = y1;
    }

    putpixel(x, y, WHITE);  // Draw the first pixel

    while (x < x2)
    {
        x++;
        if (p < 0)
        {
            p += twoDy;
        }
        else
        {
            y++;
            p += twoDyDx;
        }
        putpixel(x, y, WHITE);  // Draw the next pixel
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");  // Initialize the graphics system

    int x1, y1, x2, y2;
    std::cout << "Enter the coordinates of the first point (x1, y1): ";
    std::cin >> x1 >> y1;
    std::cout << "Enter the coordinates of the second point (x2, y2): ";
    std::cin >> x2 >> y2;

    bresenhamLine(x1, y1, x2, y2);  // Call the line drawing function

    getchar();  // Wait for a key press
    closegraph();  // Close the graphics mode

    return 0;
}

