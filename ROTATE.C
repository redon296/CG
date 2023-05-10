// Rotation
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
  int gd = DETECT, gm;
  int x1,y1,x2,y2;
  double c,s,angle;
  initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
  x1=100; y1=200;
  x2=400; y2=200;
  line(x1,y1,x2,y2);
  printf("How much you want to rotate: ");
  scanf("%lf", &angle);
  c = cos((angle*3.14)/180);
  s = sin((angle*3.14)/180);
  x1 = floor(x1*c-y1*s);
  y1 = floor(x1*s+y1*c);
  x2 = floor(x2*c-y2*s);
  y2 = floor(x2*s+y2*c);
  setcolor(BLUE);
  line(x1,y1,x2,y2);
  getch();
  closegraph();
}