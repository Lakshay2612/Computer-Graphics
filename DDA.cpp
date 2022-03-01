
#include <graphics.h>
#include <iostream.h>
#include <math.h>
#include <dos.h>
#include <conio.h>
void main( )
{
clrscr();
float x,y,x1,y1,x2,y2,dx,dy,slope;
int gdriver = DETECT,gmode;
int i;
	initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");

cout<<"Enter the value of x1 and y1 : ";
cin>>x1>>y1;
cout<<"Enter the value of x2 and y2: ";
cin>>x2>>y2;

dx=abs(x2-x1);
dy=abs(y2-y1);

if(dx>=dy)// m<=1
slope=dx;
else//m>1
slope=dy;

dx=dx/slope;
dy=dy/slope;

x=x1;
y=y1;

i=1;
while(i<=slope)
{
putpixel(x,y,5);
x=x+dx;
y=y+dy;
i=i+1;
delay(50);
}
closegraph();
getch();
}
