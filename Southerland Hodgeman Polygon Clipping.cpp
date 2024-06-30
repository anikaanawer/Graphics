///Implement Southerland Hodgeman Polygon Clipping Algorithm
#include<bits/stdc++.h>
#include <graphics.h>
#include <conio.h>
#include <math.h>
#include <process.h>
#define TRUE 1
#define FALSE 0
typedef unsigned int outcode;  // alias outcode create kore for the data type unsigned int
//outcode
int CompOutCode(float x,float y);
enum { TOP = 0x1,  //outcodes er jnno  enumeration define korte hbe.
       BOTTOM = 0x2,  //These values represent whether a point is above, below, to the right, or to the left of a clipping window edge.
       RIGHT = 0x4,
       LEFT = 0x8
     };
float xmin,xmax,ymin,ymax;
int clip(float x0,float y0,float x1,float y1)
{
    outcode outcode0,outcode1,outcodeOut;//These variables will store the outcodes for the two
    //endpoints and the result outcode during clipping.
    int accept = FALSE,done = FALSE; //These variables are used to determine whether the line segment
    //is accepted after clipping and whether the clipping process is done.
    outcode0 = CompOutCode(x0,y0);  //two endpoints of the line segment using the CompOutCode function.
    outcode1 = CompOutCode(x1,y1);
    do
    {
        if(!(outcode0|outcode1)) //If both outcodes are zero (meaning both endpoints are inside
        {
            //the clipping window), set accept to TRUE and done to TRUE to accept the line segment.
            accept = TRUE;
            done = TRUE;
        }
        else if(outcode0 & outcode1) //If both outcodes have a common set bit, set done to TRUE, indicating that
            done = TRUE;             //the line is entirely outside the window.
        else // If neither of the above conditions is met, it means the line needs clipping.
        {
            float x,y;
            outcodeOut = outcode0?outcode0:outcode1;  //Inside this block, the code calculates the intersection point
            //of the line with the clipping window and updates the appropriate
            //endpoint (x0, y0, or x1, y1) and their corresponding outcodes (outcode0 or outcode1).
            if(outcodeOut & TOP)
            {
                x = x0+(x1-x0)*(ymax-y0)/(y1-y0);
                y = ymax;
            }
            else if(outcodeOut & BOTTOM)
            {
                x = x0+(x1-x0)*(ymin-y0)/(y1-y0);
                y = ymin;
            }
            else if(outcodeOut & RIGHT)
            {
                y = y0+(y1-y0)*(xmax-x0)/(x1-x0);
                x = xmax;
            }
            else
            {
                y = y0+(y1-y0)*(xmin-x0)/(x1-x0);
                x = xmin;
            }
            if(outcodeOut==outcode0)
            {
                x0 = x;
                y0 = y;
                outcode0 = CompOutCode(x0,y0);
            }
            else
            {
                x1 = x;
                y1 = y;
                outcode1 = CompOutCode(x1,y1);
            }
        }
    }
    while(done==FALSE);// TRUE na howa prjnto loop lgbe, indicating the
    //line is either accepted or entirely outside the window
    if(accept)  //If the line is accepted after clipping, draw it using the line function.
        line(x0,y0,x1,y1);
    outtextxy(150,20,"POLYGON AFTER CLIPPING");//Display a text message on the graphics window.
    rectangle(xmin,ymin,xmax,ymax);
}
//outcode
int CompOutCode(float x,float y)
{
    outcode code = 0;
    if(y>ymax)
        code|=TOP;
    else if(y<ymin)
        code|=BOTTOM;
    if(x>xmax)
        code|=RIGHT;
    else if(x<xmin)
        code|=LEFT;
    return code;
}
int main( )
{
    float x1,y1,x2,y2;
    /* request auto detection */
    int  n,poly[14],i;
    printf("Enter the no of sides of polygon:");
    scanf("%d",&n);

    printf("\nEnter the coordinates of polygon\n");
    for( i=0; i<2*n; i++) //x,y er value er jnno 2n prjnto
    {
        scanf("%d", &poly[i]);
    }
    poly[2*n]=poly[0];
    poly[2*n+1]=poly[1];
    printf("Enter the rectangular coordinates of clipping window\n");
    scanf("%f%f%f%f",&xmin,&ymin,&xmax,&ymax);
    /* initialize graphics and local variables */
    initwindow(900, 900, "c211237");
    outtextxy(150,20,"POLYGON BEFORE CLIPPING");
    drawpoly(n+1,poly);
    rectangle(xmin,ymin,xmax,ymax);
    getchar( );
    cleardevice( );
    for(i=0; i<n; i++)
        clip(poly[2*i],poly[(2*i)+1],poly[(2*i)+2],poly[(2*i)+3]);
    getch( );
    restorecrtmode( );
    return 0;
}
/*Input : Polygon : (100,150), (200,250), (300,200)
        Clipping Area : (150,150), (150,200), (200,200),
                            (200,150) i.e. a Square
Output : (150, 162) (150, 200) (200, 200) (200, 174) */
