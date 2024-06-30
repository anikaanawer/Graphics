#include <graphics.h>

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm, (char*)"");

    setbkcolor(WHITE);
     cleardevice();
     setcolor(BLUE);

	rectangle(200, 50, 400, 100);
	rectangle(150, 100, 450, 150);
	rectangle(190,150,410,300);
	rectangle(300, 300, 200, 300);
	rectangle(275, 200, 325, 300);
	rectangle(210, 180, 250, 220);
	rectangle(360, 180, 400, 220);


	//setfillstyle(1,GREEN);
   //floodfill(250,150,GREEN);

	getchar();
	closegraph();

	return 0;
}

