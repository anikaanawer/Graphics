#include<graphics.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int gd,gm;
    detectgraph( &gd,&gm);
    initgraph(&gd,&gm,"");

     setbkcolor(WHITE);
     cleardevice();
     setcolor(BLACK);


    rectangle(100,50,400,450);
    line(250,50,100,250);
   line(250,50,400,250);
   line(100,250,250,450);
    line(250,450,400,250);


    line(250,100,150,250);
   line(250,100,350,250);
   line(150,250,250,400);
    line(250,400,350,250);


   line(250,250,250,100);
   line(250,250,400,250);
   line(250,250,100,250);
   line(250,250,250,400);


    line(250,250,175,150);
    line(250,250,300,175);
    line(250,250,200,325);
    line(250,250,300,325);



    getchar();
    return 0;
}
