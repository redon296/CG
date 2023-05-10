#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void bresCircle(int);
void main()
{
  int gd = DETECT, gm;
  int r; // radius
  initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

  printf("Enter the radius: ");
  scanf("%d", &r); // storing the radius
  bresCircle(r); //passing r as an argument in our function

  //drawing x and y axes
  line(getmaxx()/2, 0, getmaxx()/2, getmaxy());
  line(0, getmaxy()/2, getmaxx(), getmaxy()/2);

  getch();
  closegraph();
}
void bresCircle(int r)
{
  int x, y, a, b, p;
  // (a,b) is mid-point of circle
  x = 0; y = r;
  a = getmaxx()/2; b = getmaxy()/2;
  // setting (a,b) at center of screen
  while (x <= y)
  {
    if (p < 0)
    {
      x++;
      p += 4*x + 6;
    }
    else // if P >= 0
    {
      x++;
      y--;
      p += 4*(x - y) + 10;
    }
    putpixel(a+x, b+y, WHITE);
    putpixel(a+x, b-y, WHITE);
    putpixel(a-x, b+y, WHITE);
    putpixel(a-x, b-y, WHITE);
    putpixel(a+y, b+x, WHITE);
    putpixel(a+y, b-x, WHITE);
    putpixel(a-y, b+x, WHITE);
    putpixel(a-y, b-x, WHITE);
  }
}