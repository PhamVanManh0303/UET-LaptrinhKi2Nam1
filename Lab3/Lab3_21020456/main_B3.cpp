/* 
graphics in Dev-C++ - nguyenvanquan7826 
*/


#include<stdio.h>
#include <winbgim.h>


void perpendicular_line(float x1,float y1,float x2,float y2,int color){

	float a=(y2-y1)/(x2-x1);
	float b=y1-a*x1;
	for(float i=x1;i<=x1+200;i+=0.5){
		putpixel(i,(b-i)/a,color);
	}
}

int main(int argc, char *argv[])
{
	// now, you can run project
	initwindow(800, 800);			// init window graphics
	setbkcolor(0);					// set background
   	cleardevice();
	

	setcolor(15);					// set text color
	line(100,120,200,50);			// use line
	
	perpendicular_line(100,120,200,50,5);	// duong thang vuong goc can tim
	
	while(!kbhit()) delay(1);		// pause screen	
	return 0;
}