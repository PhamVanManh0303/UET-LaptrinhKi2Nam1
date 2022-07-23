#include <winbgim.h> 

int main(int argc, char *argv[])
{
	// now, you can run project
	initwindow(800, 800);			// init window graphics
	setbkcolor(0);					// set background
   	cleardevice();

	
	setfillstyle(1,3);
//	ellipse(400,400,0,360,250,150);	
	fillellipse(400,400,250,150);
	
	setfillstyle(1,4);
	bar(280,270,520,530);

	setfillstyle(1,2);				// setup color
	circle(400,400,120);
	floodfill(400,400,15);			// tạo vùng chọn cho màu
	
	
	while(!kbhit()) delay(1);		// pause screen	
	return 0;
}