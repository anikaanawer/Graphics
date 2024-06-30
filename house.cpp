#include <graphics.h>
int main()
{
    /* initialize graphics window at 400 x 300 */
    initwindow(600, 600);
    setcolor(8);
    line(150, 50, 200, 100);
    line(150, 50, 350, 50);
    line(350, 50, 400, 100);
    line(350, 50, 400, 100);
    line(200,100,200,200);
    line(200,100,400,100);
    setfillstyle(SOLID_FILL,8);
    floodfill(270,70,8);
    setcolor(RED);
    line(90, 110, 150, 50);
    line(150, 50, 200, 100);
    line(90, 110, 100, 110);
    line(100,110,100,160);
    line(100,160,200,200);
    line(198,100,198,200);
    setfillstyle(SOLID_FILL,RED);
    floodfill(150,100,RED);
    putpixel(150,130,14);
    setcolor(RED);
    rectangle(200,100,400,200);
    setfillstyle(SOLID_FILL,RED);
    floodfill(250,150,RED);
    setcolor(BLACK);
    rectangle(290,150,320,198);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(310,180,BLACK);
    setcolor(BLACK);
    line(135,110,165,120);
    line(135,140,165,150);
    line(135,110,135,140);
    line(165,120,165,150);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(150,130,BLACK);
    getchar();
    closegraph();
    return 0;
}


