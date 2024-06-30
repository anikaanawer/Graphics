//Scan conversion of a line using direct line equation.
/*#include <graphics.h>
#include <iostream>
using namespace std;
void drawLine(int x1, int y1, int x2, int y2)
{
    float m = (float)(y2 - y1) / (x2 - x1);//slope
    int dx = x2 - x1;
    int dy = y2 - y1;
    int x = x1,y = y1;
    int gd = DETECT, gm;
    initwindow(500, 500, "C211237");
    putpixel(x, y, YELLOW);
    for (int i = 0; i < dx; i++)
    {
        x = x + 1;
        y = y + m;
        putpixel(x, y, YELLOW);
    }
    getchar();
    closegraph();
}
int main()
{
    int x1, y1, x2, y2;
    cout << "The coordinates of the First Endpoint (x1 y1): ";
    cin >> x1 >> y1;
    cout << "The coordinates of the Second Endpoint (x2 y2): ";
    cin >> x2 >> y2;
    drawLine(x1, y1, x2, y2);
    return 0;
}*/
#include <iostream>

using namespace std;

void basicLineAlgorithm(int x1, int y1, int x2, int y2)
{
    float m = (float)(y2 - y1) / (x2 - x1); // Calculate slope
    for (int x = x1; x <= x2; x++)
    {
        float y = m * (x - x1) + y1; // Calculate y for each x
        cout << "(" << x << ", " << int(y + 0.5) << ")" << endl; // Round to nearest integer
    }
}

int main()
{
    int x1, y1, x2, y2;
    cout << "Enter starting coordinates (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Enter ending coordinates (x2, y2): ";
    cin >> x2 >> y2;

    basicLineAlgorithm(x1, y1, x2, y2);

    return 0;
}

