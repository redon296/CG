// DDA Line Drawing Algorithm

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void ddaline(int, int, int, int);
void main()
{
	int gd = DETECT, gm;
	int x1,y1,x2,y2;
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
	printf("Initial coordinates: ");
	scanf("%d%d", &x1, &y1);
	printf("\nFinal coordinates: ");
	scanf("%d%d", &x2, &y2);
	line(x1,x2,y1,y2);
	getch();
	closegraph();
}
void ddaline(int x1, int y1, int x2, int y2)
{
	int m,dx,dy,i;
	m = (y2-y1)/(x2-x1);
	while(x1 <= y1){
		if (m <= 1)
		{
		  dx = 1;
		  dy = m*dx;
		}
		else
		{
		  dy = 1;
		  dx = dy/m;
		}
		x1 = x1 + dx;
		y1 = y1 + dy;
		putpixel(x1,y1,YELLOW) ;
	}
}