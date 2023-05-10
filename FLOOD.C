// Flood Fill Algorithm
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void ffill(int, int, int, int);
void main()
{
  int gd = DETECT, gm;
  initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
  rectangle(50,50,100,100);
  ffill(55,55,0,RED);
  getch();
  closegraph();
}
void ffill(int x, int y, int oldc, int newc)
{
  if(getpixel(x, y) == oldc)
  {
    putpixel(x,y,newc);
    delay(4);
    ffill(x+1,y,oldc,newc);
    ffill(x-1,y,oldc,newc);
    ffill(x,y+1,oldc,newc);
    ffill(x,y-1,oldc,newc);
  }
}