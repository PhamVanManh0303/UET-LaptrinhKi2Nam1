/* 
graphics in Dev-C++ - nguyenvanquan7826 
*/

#include <winbgim.h> 

int main(int argc, char *argv[])
{
	// now, you can run project
	initwindow(400, 400);			// init window graphics
	setbkcolor(0);					// set background
   	cleardevice();
//	setcolor(15);					// set text color
	
	setfillstyle(1,5);
	ellipse(200, 200, 0, 360, 175, 80);
	
	setfillstyle(1,4);
	bar(128,128,272,272);
	
	setfillstyle(1,10);
	circle(200,200,72);
	
	
	while(!kbhit()) delay(1);		// pause screen	
	return 0;
}