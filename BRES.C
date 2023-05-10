// Bresenham Line Drawing Algrorithm
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void bresLine(int, int, int, int);
void main()
{
  int gd = DETECT, gm;
  int x1,y1,x2,y2;
  initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
  x1=100; y1= 300; x2=400; y2=300;
  bresLine(x1,y1,x2,y2);
  getch();
  closegraph();
}
void bresLine(x1,y1,x2,y2)
{
  int ds, di, dt, dx, dy;
  dx = x2-x1;
  dy = y2-y1;
  ds = 2*dy;
  di = 2*dy - dx;
  dt = 2*dy - 2*dx;
  putpixel(x1,y1,YELLOW);
  while(x1<=x2)
  {
    x1++;
    if(di < 0)
      di = di+ds;
    else
    {
      y1++;
      di = di+dt;
    }
    putpixel(x1,y1,YELLOW);
    delay(5);
  }
}