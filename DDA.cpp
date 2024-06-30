//DDA
/*#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    int gd = DETECT,gm, i;
    float x, y,dx,dy,steps;
    int x0, x1, y0, y1;
    initwindow(600, 600, "C211237");
    setbkcolor(WHITE);
    //x0 = 100 , y0 = 200, x1 = 500, y1 = 300;
    cin>>x0>>y0>>x1>>y1;
    dx = (float)(x1 - x0);
    dy = (float)(y1 - y0);
    if(dx>=dy)
    {
        steps = dx;
    }
    else
    {
        steps = dy;
    }
    dx = dx/steps;
    dy = dy/steps;
    x = x0;
    y = y0;
    i = 1;
    while(i<= steps)
    {
        putpixel(x, y, RED);
        x += dx;
        y += dy;
        i=i+1;
    }
    getchar();
    closegraph();
}*/

#include <iostream>
#include <graphics.h>  // Include graphics library (use appropriate graphics library based on your environment)
#include <cmath>       // For the abs() function

void drawLineDDA(int x1, int y1, int x2, int y2)
{
    int dx = x2 - x1;
    int dy = y2 - y1;

    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

    float Xinc = dx / (float) steps;
    float Yinc = dy / (float) steps;

    float X = x1;
    float Y = y1;

    for (int i = 0; i <= steps; i++)
    {
        putpixel(X, Y, WHITE);
        X += Xinc;
        Y += Yinc;
        delay(10);  // Add a small delay to see the drawing step-by-step
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

    drawLineDDA(x1, y1, x2, y2);  // Call the line drawing function

    getchar();  // Wait for a key press
    closegraph();  // Close the graphics mode

    return 0;
}
///100 200 500 300
