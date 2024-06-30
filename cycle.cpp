#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Radius for circles
    int radius_left = 50;
    int radius_middle = 10;
    int radius_right = 50;

    setlinestyle(0,0,7);

    // Left circle
    circle(200, 200, radius_left);
    // Middle circle
    circle(300, 200, radius_middle);
    // Right circle
    circle(400, 200, radius_right);

    // Line from left circle to middle circle
    line(150 + radius_left, 200, 300 - radius_middle, 200);
    line(150 + radius_left, 200, 250, 120);
    //line(250, 120, 300 , 200-radius_middle);
    line(235, 100, 300 , 200-radius_middle);
    line(300, 200-radius_middle,350,120 );
    line(338, 100,400,200 );
    line(338, 100,360,90 );
    line(220, 100, 250 , 100);
    // Line from left circle to right circle
    //line(150 + radius_left, 200, 450 - radius_right, 200);

    getchar();
    closegraph();
    return 0;
}
