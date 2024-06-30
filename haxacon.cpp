#include <graphics.h>

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm, (char*)"");

     setcolor(RED);

	line(200, 100, 300, 100);
	line(300, 100, 350, 200);
	line(350, 200, 300, 300);
	line(300, 300, 200, 300);
	line(200, 300, 150, 200);
	line(150, 200, 200, 100);

	setfillstyle(1,RED);
   floodfill(250,150,RED);

	getchar();
	closegraph();

	return 0;
}





















/*#include <graphics.h>
int main()
{
    initwindow(600, 600);

   // line(150, 50, 200, 100);
    line(150,50,300, 50);
    line(150,50,50,150);
    line(50,150,150,250);
    line(150,250,300,250);
    line(300,250,400,150);
    line(400,150,300,50);

        getchar();
    closegraph();
    return 0;
}*/
