/* 
graphics in Dev-C++ - nguyenvanquan7826 
*/
#include<stdio.h>
#include <winbgim.h> 


void drawUsePutpixel(float x1,float y1,float x2,float y2,int color){
	float a,b;
	a=(y2-y1)/(x2-y1);
	b=y1-a*x1;
	printf("%.2f %.2f",a,b);
	for(float i=x1;i<=x2;i+=0.5){
		putpixel(i,a*i+b,color);
	}
}

int main(int argc, char *argv[])
{
	// now, you can run project
	initwindow(500, 500);			// init window graphics
	setbkcolor(1);					// set background
   	cleardevice();
	setcolor(14);					// set text color
	
	drawUsePutpixel(100,100,400,400,0); 	//su dung ham void de ve
	
	line(100,100,400,400);			// use const line
	
	while(!kbhit()) delay(1);		// pause screen	
	return 0;
}