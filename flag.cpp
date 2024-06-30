#include<graphics.h>
#include<conio.h>
main()
{
    int driver,mode;
    driver=DETECT;
    mode=0;
    initgraph(&driver,&mode,"");
    setbkcolor(WHITE);
    cleardevice();


    setcolor(GREEN);
    rectangle(150,40,450,180);
    setfillstyle(1,GREEN);
    floodfill(160,50,GREEN);

    setcolor(BLUE);
    rectangle(138,35,150,450);
    setfillstyle(1,BLUE);
    floodfill(140,40,BLUE);

    setcolor(WHITE);
    setfillstyle(1,BLUE);
    bar(130,450,160,460);

    setcolor(WHITE);
    circle(300,110,55);
    setfillstyle(1,RED);
    floodfill(320,120,WHITE);


    getchar();
    closegraph();
    return 0;
}
