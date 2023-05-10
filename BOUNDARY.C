// Boundary Fill Algorithm
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void bfill(int, int, int, int);
void main()
{
  int gd = DETECT, gm;
  initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
  rectangle(50,50,100,100);
  bfill(55,55,15,4);
  getch();
  closegraph();
}
void bfill(int x, int y, int f, int b)
{
  int c = getpixel(x,y);
  if(c!=b && c!=f)
  {
    putpixel(x,y,f);
    delay(5);
    bfill(x+1, y, f, b);
    bfill(x-1, y, f, b);
    bfill(x, y+1, f, b);
    bfill(x, y-1, f, b);
  }
}