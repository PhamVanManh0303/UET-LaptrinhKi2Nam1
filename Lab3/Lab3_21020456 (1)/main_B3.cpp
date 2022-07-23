#include<stdio.h>
#include <winbgim.h>


void perpendicular_line(float x1,float y1,float x2,float y2,int color){
	float a=(y2-y1)/(x2-x1);
	float b=y1-a*x1;
	for(float i=x1;i<=x1+250;i+=0.5){
		putpixel(i,(b-i)/a,color);
	}
}


void parallel_lines(float x1,float y1,float x2,float y2,int color){
	float a=(y2-y1)/(x2-x1);
	float b=y1-a*x1;
	for(float i=x1;i<=x2+100;i+=0.5){
		for(float j=0;j<=800;j+=150)
			if(j!=b)
				putpixel(i,a*i+j,color);
	}
}


int main(int argc, char *argv[])
{
	// now, you can run project
	initwindow(800, 800);			// init window graphics
	setbkcolor(0);					// set background
   	cleardevice();
   	
   	float a, b,c,d;
   	scanf("%f%f%f%f", &a, &b, &c, &d);
	

	setcolor(15);					// set text color
	line(a,b,c,d);			// use the line function to draw a line d
	
	perpendicular_line(a,b,c,d,5);	// duong thang vuong goc can tim
	
	parallel_lines(a,b,c,d,6);		// nhung duong thang song song voi duong thang d
	
	while(!kbhit()) delay(1);		// pause screen	
	return 0;
}