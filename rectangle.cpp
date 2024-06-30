#include <graphics.h>
int main()
{
	// gm is Graphics mode which is a computer display
	// mode that generates image using pixels.
	// DETECT is a macro defined in "graphics.h" header file
	int gd = DETECT, gm;

	// location of left, top, right, bottom
	int left = 150, top = 150;
	int right = 450, bottom = 450;

	// initgraph initializes the graphics system
	// by loading a graphics driver from disk
	initgraph(&gd, &gm, "");

	// rectangle function
	rectangle(left, top, right, bottom);

	getchar();

	closegraph();

	return 0;
}

