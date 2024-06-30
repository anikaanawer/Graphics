#include <bits/stdc++.h>
#include <graphics.h>
#include <math.h>
#include <conio.h>
using namespace std;

int main() {
    int gd = DETECT, gm;
    int radius = 50;
    int x = 120, y = 240;
    char ch;

    initgraph(&gd, &gm, "");

    while (1) {
        cleardevice();
        circle(x, y, radius);

        ch = getchar();
        if (ch == 'l')
            {
                cout<<"l"<<endl;
            x -= 15;
        } else if (ch == 'r') {
            x += 15;
        } else if (ch == 'u') {
            y -= 15;
        } else if (ch == 'd') {
            y += 15;
        } else if (ch == 'i') { // Increase radius
            radius += 15;
        } else if (ch == 'k') { // Decrease radius
            if (radius < 15) // Ensure radius doesn't become negative
                radius -= 15;
        }
    }

    getchar();
    closegraph();
    return 0;
}
