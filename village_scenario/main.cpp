#include<windows.h>
#include <GL/glut.h>

int posx = 0;
void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);	// Set display window colour to white

    glMatrixMode(GL_PROJECTION);		// Set projection parameters
    gluOrtho2D(0.0, 85.0, 0.0, 82.0);

}

void line_drawing(float a, float b, float c, float d)
{
    // Draw an outlined triangle
    glBegin(GL_LINES);

    glVertex2f(a, b);
    glVertex2f(c, d);


    glEnd();
}

void quads(float a, float b, float c, float d, float e, float f, float g, float h)
{

    glBegin(GL_QUADS); //Begin quadrilateral coordinates

    //Trapezoid
    glVertex2f(a, b);
    glVertex2f(c,d);
    glVertex2f(e, f);
    glVertex2f(g, h);

    glEnd(); //End quadrilateral coordinates


}

void triangle(float a, float b, float c, float d, float e, float f)
{
    glBegin(GL_TRIANGLES);
    //Triangle
    glVertex2f(a, b);
    glVertex2f(c, d);
    glVertex2f(e, f);

    glEnd();//End triangle coordinates

}
///river
void river()
{
    glColor3f(0.0352941176470588, 0.5098039215686275, 0.9568627450980392);   //blue
    glBegin(GL_POLYGON);

    glVertex3i(14, 0, 0);
    glVertex3i(12, 12, 0);
    glVertex3i(50, 12, 0);
    glVertex3i(49, 0, 0);
    glEnd();
}

void boat()
{
    quads(18.0,20.0,18.0,24.0,20.0,24.0,20.0,20.0);
    quads(16.4,16.0,16.4,24.0,18.0,24.0,18.0,16.0);
    glColor3f(0,0,0);
    quads(17.5,24.0,17.5,28.0,19.0,28.0,19.0,24.0);
    glColor3f(1,0,1);
    quads(20.5,20.0,20.5,22.0,26.0,22.0,26.0,20.0);

    glColor3f(0,0,0);

    glBegin(GL_POLYGON);
    glVertex3i(19,12,0);
    glVertex3i(16,16,0);
    glVertex3i(30,16,0);
    glVertex3i(26,12,0);
    glEnd();

    glColor3f(1,0,0);

    glBegin(GL_POLYGON);
    glVertex3i(18,16,0);
    glVertex3i(18,20,0);
    glVertex3i(28,20,0);
    glVertex3i(28,16,0);
    glEnd();

    glColor3f(1,0.7,0);

    glBegin(GL_TRIANGLES);
    glVertex3i(28,16,0);
    glVertex3i(28,20,0);
    glVertex3i(30,16,0);
    glEnd();
}
void update(int value)
{


    if(posx>=22)
    {
        posx=0;
    }
    else
    {
        posx++;
    }
    glutPostRedisplay();  //dynamic korar jonno
    glutTimerFunc(250, update, 0);  //250 manta joto barabo nowka toto ashtee cholbee
}
void tree()
{
    ///tree1
    glColor3f(0.6156863,0,0);

    glBegin(GL_POLYGON);

    glVertex3i(5, 12, 0);
    glVertex3i(7, 12, 0);
    glVertex3i(7, 30, 0);
    glVertex3i(5, 30, 0);

    glEnd();

    glColor3f(0.0, 0.5, 0.0);

    glBegin(GL_POLYGON);

    glVertex3i(1, 30, 0);
    glVertex3i(11, 30, 0);
    glVertex3i(6, 40, 0);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex3i(1, 35, 0);
    glVertex3i(10, 35, 0);
    glVertex3i(6, 45, 0);

    glEnd();

}

void drawShapes(void)
{
    glClear(GL_COLOR_BUFFER_BIT);	// Clear display window

    // glColor3f(0.0f, 0.1f, 0.0f);//Forest Green
    glColor3f(0.0f, 1.0f, 0.0f);//Green



    quads(0.0,0.0,0.0,13.0,90.0,13.0,90.0,0.0); //


    glColor3f(0.0f, 1.0f, 1.0f);
    //sky
    glColor3f(0.0,0.9,0.9);
    quads(0.0,12.0,0.0,85.0,85.0,85.0,85.0,12.0);

    glColor3f(0.0, 0.0, 0.0);

    //Adjust the point size
    glPointSize(5.0);

    //Set colour to red
    glColor3f(1.0, 0.0, 0.0);

    line_drawing(69.0,6.0,69.0,16.0);
    line_drawing(69.0,16.0,77.0,16.0);
    line_drawing(77.0,16.0,77.0,6.0);
    line_drawing(69.0,6.0,77.0,6.0);
    quads(70.5,10.0,70.5,12.0,71.5,12.0,71.5,10.0);
    glColor3f(1.0, 0.0, 1.0);
    quads(71.5,10.0,71.5,12.0,72.0,12.0,72.0,10.0);
    glColor3f(0.0, 0.0, 1.0);
    quads(72.0,10.0,72.0,12.0,73.0,12.0,73.0,10.0);
    line_drawing(75.0,6.0,75.0,10.0);
    line_drawing(75.0,10.0,76.7,10.0);
    line_drawing(76.7,10.0,76.7,6.0);
    quads(75.5,9.7,76.5,9.7,76.5,6.5,75.5,6.5);

    line_drawing(69.0, 16.0,69.0,28.0);
    line_drawing(69.0, 28.0,77.0,28.0);
    line_drawing(77.0, 28.0,77.0,16.0);
    quads(70.0,20.0,70.0,22.0,72.0,22.0,72.0,20.0);
    quads(73.0,20.0,73.0,22.0,75.0,22.0,75.0,20.0);
    glColor3f(1.0, 0.50, 1.0);
    quads(77.0,6.0,77.0,38.0,82.0,38.0,82.0,6.0);
    glColor3f(0.50, 1.0, 0.0);
    triangle(77.0,38.0,79.0,48.0,82.0,38.0);
    glColor3f(1.0, 0.60, 1.0);
    //tr

    // glColor3f(0.0, 0.60, 1.0);
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red


    //moi
    line_drawing(63.0, 6.0,68.0,28.0);
    line_drawing(64.0, 6.0,69.0,28.0);

    line_drawing(63.3, 8.0,64.6,8.0);
    line_drawing(64.0, 10.0,64.9,10.0);
    line_drawing(64.3, 12.0,65.3,12.0);
    line_drawing(64.9, 14.0,65.9,14.0);
    line_drawing(65.2, 16.0,66.2,16.0);
    line_drawing(65.8, 18.0,66.8,18.0);
    line_drawing(66.1, 20.0,67.2,20.0);
    line_drawing(66.4, 22.0,67.6,22.0);
    line_drawing(67.0, 24.0,68.0,24.0);
    line_drawing(67.4, 26.0,68.5,26.0);
    line_drawing(48.0, 6.0,49.3,7.9);

    glColor3f(1.0f, 1.89f, 0.89f);
    triangle(55.0,25.0,58.0,35.0,61.0,25.0);
    glColor3f(0.5411764705882353, 0.0, 0.5411764705882353);

    quads(55.0,12.0,55.0,25.0,61.0,25.0,61.0,12.0);

    tree();
    river();

    glPushMatrix();  //dynamic korar jonno
    glTranslatef(posx,-1,-1);
    boat();
    glPopMatrix();


    glFlush();	// Process all OpenGL routines
}


int main(int argc, char* argv[])
{
    glutInit(&argc, argv);						     // Initalise GLUT
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	     // Set display mode

    glutInitWindowPosition(50, 100);				// Set window position
    glutInitWindowSize(600, 600);					// Set window size
    glutCreateWindow("Village View");	// Create display window

    init();							// Execute initialisation procedure
    glutDisplayFunc(drawShapes);
    glutTimerFunc(0, update, 0);		// Send graphics to display window
    glutMainLoop();					// Display everything and wait

    return 0;
}
