/* 
graphics in Dev-C++ - nguyenvanquan7826 
*/
#include<stdio.h>
#include <winbgim.h> 

int main(int argc, char *argv[])
{
	// now, you can run project
	initwindow(800, 800);			// init window graphics
	setbkcolor(0);					// set background
   	cleardevice();
   	
   	
   	//test1
	for(int i=0;i<=15;i++){
		setcolor(i);					// set text color
		settextstyle (3,VERT_DIR,2);
		putpixel(225,40*i,i);
		outtextxy(400,20+40*i,"Xin chao mau thu k\n");// print text in window graphics
	}
	
	
	//test2
//	for(int i=0;i<=15;i++){
//		setcolor(i);					// set text color
//		settextstyle (3,VERT_DIR,2);
//		putpixel(50*i,70,i);
//		outtextxy(10+50*i,100,"x");// print text in window graphics
//	}
	
	
	//test3
//	for(int i=0;i<=15;i++){
//		setcolor(i);					// set text color
//		settextstyle (3,VERT_DIR,2);
//		setlinestyle(1,4,2);
//		putpixel(225,40*i,i);
//		outtextxy(400,20+40*i,"Xin chao mau thu k\n");// print text in window graphics
//		
//	}
//	for(int z=180;z<450;z++){
//		for(int j=1;j<=800;j++){
//			if(z<220)
//				putpixel(z,j,10);
//			if(z>410)
//				putpixel(z,j,3);
//		}
//	}
	setcolor(5);
	bar(180,0,220,800);
	bar(410,0,450,800);
	
	while(!kbhit()) delay(1);		// pause screen	
	return 0;
}