#include<stdio.h>
#include<conio.h>
#include <winbgim.h> 

int main(int argc, char argv[])
{
    // now, you can run project
    initwindow(500, 500);            // init window graphics
    setbkcolor(1);                    // set background
       cleardevice();
    for(int i=0;i<=15;i++){
        setcolor(i);                    // set text color
        settextstyle (3,VERT_DIR,2);
        outtextxy(300,20+20i,"Hello World\n");// print text in window graphics
    }

    while(!kbhit()) delay(1);        // pause screen
    return 0;
}
