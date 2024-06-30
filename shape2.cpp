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

     rectangle(300,50,330,70);
     line(300,50,300,90);
     line(300,90,240,160);
     line(300,90,360,160);
     line(240,160,360,160);




     rectangle(140,160,460,190);
     rectangle(70,190,530,450);



     rectangle(70,190,165,450);
     rectangle(70,190,165,290);

     rectangle(165,190,191,450);


     rectangle(191,190,286,450);
     rectangle(191,190,286,290);



     rectangle(286,190,314,450);


     rectangle(314,190,409,450);
     rectangle(314,190,409,290);


     rectangle(409,190,435,450);


     rectangle(435,190,530,450);
     rectangle(435,190,530,290);



    getchar();
    return 0;
}
